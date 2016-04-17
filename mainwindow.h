/*
 (C) Copyright 2015 Jeremy Burton

 This file is part of Sark-100-antenna-analyzer.

 Sark-100-antenna-analyzer is free software: you can redistribute it
 and/or modify it under the terms of the GNU General Public License as
 published by the Free Software Foundation, either version 3 of the
 License, or (at your option) any later version.

 Sark-100-antenna-analyzerr is distributed in the hope that it will be
 useful, but WITHOUT ANY WARRANTY; without even the implied warranty
 of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "config.h"
#include "version.h"
#include "eventreceiver.h"
#include "seriallink.h"

namespace Ui {
class MainWindow;
}

class MainWindow: public QMainWindow, public EventReceiver {
Q_OBJECT

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();

	void RaiseEvent(event_t event, int arg);

	void RaiseEvent2(event_t2 event, float freq, float swr);

	static const Version version;

	SerialLink *link;

private:

	void set_band(double f, double span);
	void set_scan_disp();
	void Auto_connect_device();

	void update_fstep();
	void draw_graph1(int fraction);
	void populate_table();
	int setFraction(int fraction);

	void toDom(QDomDocument &doc);
	void fromDom(QDomElement &e0);

	Ui::MainWindow *ui;
	QTimer montimer;

private slots:

	void Slot_scanBtn_click();

	void Slot_syncCentre_click();
	void Slot_button5khz_click();
	void Slot_button20khz_click();
	void Slot_button50khz_click();
	void Slot_button100khz_click();

	void Slot_khzScan(float factor, int stepSize);

	void Slot_mon_mhz_change();
	void Slot_mon_100khz_change();
	void Slot_mon_10khz_change();
	void Slot_mon_1khz_change();
	void Slot_mon_100hz_change();
	void Slot_mon_10hz_change();

	void Slot_cursor_move(double pos);
	void Slot_band_change(int idx);
	void Slot_fcentre_change(double v);

	void Slot_fspan_change(double v);
	void Slot_point_count_change(int);
	void Slot_plot_change(int);
	void Slot_menuDevice_Show();
	void Slot_menuDevice_Select(QAction *act);

	void Slot_mhz_change();
	void Slot_khz100_change();
	void Slot_khz10_change();
	void Slot_khz_change();

	void Slot_Load();
	void Slot_Save();
	void Slot_Settings();
	void Slot_about();
	void Slot_copy();
	void Slot_monStart_click();
	void Slot_monStop_click();
	void Slot_montimer_timeout();
	void Slot_onno_change(int);
};

#endif // MAINWINDOW_H
