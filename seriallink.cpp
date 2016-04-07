/*
 (C) Copyright 2015 Jeremy Burton

 This file is part of Sark-100-antenna-analyzer.

 Sark-100-antenna-analyzer is free software: you can redistribute it
 and/or modify it under the terms of the GNU General Public License as
 published by the Free Software Foundation, either version 3 of the
 License, or (at your option) any later version.

 Sark-100-antenna-analyzer is distributed in the hope that it will be
 useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
//#include <string.h>
//#include <unistd.h>

//#include <errno.h>
//#include <poll.h>

//#include <termios.h>
//#include <fcntl.h>
//#include <sys/ioctl.h>

#include "config.h"
#include "scandata.h"
#include "seriallink.h"

extern ScanData scandata;

#ifdef ENABLE_DUMMY_DEV

SerialLink::SerialLink(const char *dev,int speed) : DummyDev ()
{
	printf("SerialLink::Init: dummy\n");
}

void SerialLink::TxCmd(const char *cmd)
{
	printf("TxCmd: %s\n",cmd);
	if (strncmp(cmd,"scan ",5)==0)
	{
		dummy_data = "Start\n\
5.1,105,0,105\n\
6.336,102.55,0,102.55\n\
7.451,95.45,0,95.45\n\
8.336,84.39,0,84.39\n\
8.904,70.45,0,70.45\n\
9.1,55,0,55\n\
8.904,39.55,0,39.55\n\
8.336,25.61,0,25.61\n\
7.451,14.55,0,14.55\n\
6.336,7.45,0,7.45\n\
5.1,5,0,5\n\
3.864,7.45,0,7.45\n\
2.749,14.55,0,14.55\n\
1.864,25.61,0,25.61\n\
1.296,39.55,0,39.55\n\
1.1,55,0,55\n\
1.296,70.45,0,70.45\n\
1.864,84.39,0,84.39\n\
2.749,95.45,0,95.45\n\
3.864,102.55,0,102.55\n\
5.1,105,0,105\n\
End\n";
	}
	else
	dummy_data = "OK\n";
	dummy_pos = 0;
}

#else

SerialLink::SerialLink(const char *dev, int speed) :
		SerialDev(dev, speed) {
	printf("SerialLink::Init: dev %s\n", dev);
}

void SerialLink::TxCmd(const char *cmd) {
	if (IsUp()) {
		printf("%ld> TxCmd: %s\n", time(NULL), cmd);
		TxData(cmd, strlen(cmd));
		TxData("\n", 1);
	}
}

#endif

//Handle standard OK/Error response from config commands
//
int SerialLink::RxResponse1() {
	int state = 0, r, ret = 0;

	for (; state < 10;) {
		r = RxLine();
		printf("%ld> RxLine=%d\n", time(NULL), r);
		if (r == 0) {
			printf("\trxbuff: %s (%d)\n", rxbuff, rxbufflen);
//printf("%ld> RxLine: %s (%d)\n",time(NULL), rxbuff,rxbufflen);
			printf("\tstate: %d\n", state);
			switch (state) {
			case 0:
				if (strcmp(rxbuff, "OK") == 0) {
					state = 10;   //Success
				} else if (strncmp(rxbuff, "Error:", 5) == 0) {
					ret = 2;      //Error
					state = 1;
				}
				break;
			case 1:
				if (strcmp(rxbuff, ">>") == 0) {
					state = 10;   //Ready for next command
				}
				break;
			}
		} else {
			ret = 1;   //Timeout
			state = 10;
		}
	}
	return ret;
}

void SerialLink::Cmd_Scan(long fstart, long fend, long fstep, bool useraw,
		EventReceiver *erx) {
	char cmd[64];
	int state = 0, r;
	Sample sample;
	long frequency = fstart;

	RxFlush();

	sprintf(cmd, "%s %ld %ld %ld\r", useraw ? "scanr" : "scan", fstart,
			fend >= FMAX ? FMAX : (fend + 1), fstep); //Add 1Hz to end freq to make it inclusive
	TxCmd(cmd);

	scandata.points.resize(0);

	//TODO: clean this up, why can I not set it globally?
//std::setlocale(LC_ALL, "sv_SE");
	std::setlocale(LC_ALL, "C"); //Need sscanf() to use default locale for number parsing.

	for (; state < 10;) {
		r = RxLine();
		printf("%ld> RxLine=%d\n", time(NULL), r);
		if (r == 0) {
			printf("\trxbuff: %s (%d)\n", rxbuff, rxbufflen);
//printf("%ld> RxLine: %s (%d)\n",time(NULL),rxbuff,rxbufflen);
			printf("\tstate: %d\n", state);
			switch (state) {
			case 0:
				if (strcmp(rxbuff, "Start") == 0) {
					erx->RaiseEvent(EventReceiver::progress_event, 0);
					state = 1;    //Results
				} else if (strncmp(rxbuff, "Error:", 5) == 0) {
					state = 10;   //Error
				} else
					state = 0;   //Garbage ? Ignore
				break;

			case 1:
				if (strcmp(rxbuff, "End") == 0) {
					erx->RaiseEvent(EventReceiver::progress_event, 100);
					state = 10;   //Done
				} else {
					printf("\tf: %ld\n", frequency);

					sample.freq = (double) (frequency);

					if (useraw) {
						double vf, vr, vz, va;
						sscanf(rxbuff, "%lf,%lf,%lf,%lf", &vf, &vr, &vz, &va);
						sample.fromRaw(vf, vr, vz, va);
						float swr = (vf + vr) / (vf - vr);

						erx->RaiseEvent2(EventReceiver::progress_event_freq,
								frequency, swr);

					} else {
						sscanf(rxbuff, "%lf,%lf,%lf,%lf", &sample.swr,
								&sample.R, &sample.X, &sample.Z);
					}

					scandata.points.push_back(sample);

					frequency += fstep;
					erx->RaiseEvent(EventReceiver::progress_event,
							(int) ((frequency - fstart) * 100 / (fend - fstart)));
				}
				break;
			}
		} else
			state = 10;   //Timeout
	}

	scandata.UpdateStats();
}

void SerialLink::Cmd_On() {
	RxFlush();

	TxCmd("on\r");
	RxResponse1();
}

void SerialLink::Cmd_Off() {
	RxFlush();

	TxCmd("off\r");
	RxResponse1();
}

void SerialLink::Cmd_Freq(long f) {
	char cmd[32];

	RxFlush();

	sprintf(cmd, "freq %ld\r", f);
	TxCmd(cmd);
	RxResponse1();
}

void SerialLink::Cmd_Raw(Sample &sample) {
	int state = 0, r;

	RxFlush();

	TxCmd("raw\r");

	//TODO: clean this up, why can I not set it globally?
	std::setlocale(LC_ALL, "C"); //Need sscanf() to use default locale for number parsing.

	for (; state < 10;) {
		r = RxLine();
		printf("%ld> RxLine=%d\n", time(NULL), r);
		if (r == 0) {
			printf("\trxbuff: %s (%d)\n", rxbuff, rxbufflen);
			printf("\tstate: %d\n", state);
			switch (state) {
			case 0:         //Ignore one blank line
				state = 1;
				break;
			case 1:         //Results
			{
				double vf, vr, vz, va;
				if (sscanf(rxbuff, "%lf,%lf,%lf,%lf", &vf, &vr, &vz, &va) == 4)
					sample.fromRaw(vf, vr, vz, va);
				state = 10;    //End of Results
			}
				break;
			}
		} else
			state = 10;   //Timeout
	}
}
