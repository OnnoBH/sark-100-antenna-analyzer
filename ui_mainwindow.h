/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "bargraph.h"
#include "graphcanvas.h"
#include "graphcursor.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_QT;
    QAction *actionDevices;
    QAction *actionLoad;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionAbout_Analyzer;
    QAction *actionSettings;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_8;
    QSplitter *splitter_2;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *monfreq;
    QLabel *label_23;
    QLabel *label_26;
    QSpinBox *monrate;
    QLabel *label_24;
    QGridLayout *gridLayout_4;
    QRadioButton *mon_10khz;
    QRadioButton *mon_mhz;
    QRadioButton *mon_100khz;
    QRadioButton *mon_1khz;
    QRadioButton *mon_100hz;
    QRadioButton *mon_10hz;
    QPushButton *monStartBtn;
    QLabel *label_25;
    QSlider *slider_hz;
    QPushButton *monitorSync;
    QGroupBox *groupBox_2;
    QSpacerItem *verticalSpacer_3;
    QWidget *verticalLayoutWidget_2;
    QGridLayout *gridLayout_5;
    BarGraph *SWR_max;
    QLabel *label_19;
    QLabel *label_18;
    QLabel *label_21;
    QLabel *R_lbl;
    QLabel *label_20;
    QLabel *label_17;
    BarGraph *SWR_Bar;
    BarGraph *Z_Bar;
    QLabel *Z_lbl;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QLabel *label_15;
    QLabel *X_lbl;
    BarGraph *R_Bar;
    BarGraph *X_Bar;
    QLabel *label_16;
    BarGraph *SWR_min;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *SWR_lbl;
    QLabel *dip;
    QLabel *peak;
    QLabel *label_27;
    QLabel *delta;
    BarGraph *SWR_delta;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QSplitter *splitter;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *fend_disp;
    QDoubleSpinBox *fcentre;
    QLabel *abc;
    QLabel *label_4;
    QLabel *label_7;
    QLabel *label_2;
    QLabel *fstep_disp;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_22;
    QLabel *label_10;
    QCheckBox *useraw_chk;
    QSpinBox *onno;
    QLabel *label_11;
    QLabel *fstart_disp;
    QComboBox *band_cb;
    QDoubleSpinBox *fspan;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_6;
    QRadioButton *mhz;
    QRadioButton *khz100;
    QRadioButton *khz10;
    QRadioButton *khz;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *scanBtn;
    QProgressBar *progressBar;
    QPushButton *syncCentre;
    QPushButton *pushButton5khz;
    QPushButton *pushButton20khz;
    QPushButton *pushButton50khz;
    QPushButton *pushButton100khz;
    QWidget *widget_7;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QCheckBox *plotx_chk;
    QCheckBox *plotz_chk;
    QWidget *widget_5;
    QWidget *widget_4;
    QWidget *widget_6;
    QWidget *widget_3;
    QCheckBox *checkBox;
    QCheckBox *plotr_chk;
    QSpacerItem *verticalSpacer;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_2;
    GraphCanvas *canvas1;
    GraphCursor *cursor;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_12;
    QLabel *swr_min_disp;
    QSpacerItem *horizontalSpacer;
    QLabel *cursor_disp;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_2;
    QTableWidget *scan_data;
    QVBoxLayout *verticalLayout_5;
    QPushButton *copyBtn;
    QSpacerItem *verticalSpacer_2;
    QWidget *tab_3;
    QFormLayout *formLayout;
    QLabel *label_14;
    QPlainTextEdit *notes_txt;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuLink;
    QMenu *menuDevice;
    QMenu *menuFile;
    QStatusBar *statusBar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1179, 864);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/128/antenna-charge-radio-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setIconSize(QSize(12, 12));
        actionAbout_QT = new QAction(MainWindow);
        actionAbout_QT->setObjectName(QStringLiteral("actionAbout_QT"));
        actionDevices = new QAction(MainWindow);
        actionDevices->setObjectName(QStringLiteral("actionDevices"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QStringLiteral("actionLoad"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout_Analyzer = new QAction(MainWindow);
        actionAbout_Analyzer->setObjectName(QStringLiteral("actionAbout_Analyzer"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QStringLiteral("actionSettings"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setMinimumSize(QSize(0, 0));
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        verticalLayout_8 = new QVBoxLayout(tab_4);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        splitter_2 = new QSplitter(tab_4);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        widget_8 = new QWidget(splitter_2);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_8->sizePolicy().hasHeightForWidth());
        widget_8->setSizePolicy(sizePolicy1);
        widget_8->setMinimumSize(QSize(300, 0));
        widget_8->setMaximumSize(QSize(260, 16777215));
        verticalLayout_6 = new QVBoxLayout(widget_8);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        monfreq = new QDoubleSpinBox(widget_8);
        monfreq->setObjectName(QStringLiteral("monfreq"));
        monfreq->setDecimals(6);
        monfreq->setMaximum(60);
        monfreq->setValue(14);

        gridLayout_3->addWidget(monfreq, 1, 1, 1, 1);

        label_23 = new QLabel(widget_8);
        label_23->setObjectName(QStringLiteral("label_23"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_23, 1, 0, 1, 1);

        label_26 = new QLabel(widget_8);
        label_26->setObjectName(QStringLiteral("label_26"));
        sizePolicy2.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(label_26, 4, 0, 1, 1);

        monrate = new QSpinBox(widget_8);
        monrate->setObjectName(QStringLiteral("monrate"));
        monrate->setMinimum(100);
        monrate->setMaximum(5000);
        monrate->setSingleStep(100);
        monrate->setValue(1000);

        gridLayout_3->addWidget(monrate, 4, 1, 1, 1);

        label_24 = new QLabel(widget_8);
        label_24->setObjectName(QStringLiteral("label_24"));

        gridLayout_3->addWidget(label_24, 0, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(-1, 0, -1, 0);
        mon_10khz = new QRadioButton(widget_8);
        mon_10khz->setObjectName(QStringLiteral("mon_10khz"));

        gridLayout_4->addWidget(mon_10khz, 0, 2, 1, 1);

        mon_mhz = new QRadioButton(widget_8);
        mon_mhz->setObjectName(QStringLiteral("mon_mhz"));
        mon_mhz->setChecked(true);

        gridLayout_4->addWidget(mon_mhz, 0, 0, 1, 1);

        mon_100khz = new QRadioButton(widget_8);
        mon_100khz->setObjectName(QStringLiteral("mon_100khz"));

        gridLayout_4->addWidget(mon_100khz, 0, 1, 1, 1);

        mon_1khz = new QRadioButton(widget_8);
        mon_1khz->setObjectName(QStringLiteral("mon_1khz"));

        gridLayout_4->addWidget(mon_1khz, 1, 0, 1, 1);

        mon_100hz = new QRadioButton(widget_8);
        mon_100hz->setObjectName(QStringLiteral("mon_100hz"));

        gridLayout_4->addWidget(mon_100hz, 1, 1, 1, 1);

        mon_10hz = new QRadioButton(widget_8);
        mon_10hz->setObjectName(QStringLiteral("mon_10hz"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(mon_10hz->sizePolicy().hasHeightForWidth());
        mon_10hz->setSizePolicy(sizePolicy3);
        mon_10hz->setMinimumSize(QSize(0, 0));

        gridLayout_4->addWidget(mon_10hz, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 0, 1, 1, 1);

        monStartBtn = new QPushButton(widget_8);
        monStartBtn->setObjectName(QStringLiteral("monStartBtn"));

        gridLayout_3->addWidget(monStartBtn, 6, 1, 1, 1);

        label_25 = new QLabel(widget_8);
        label_25->setObjectName(QStringLiteral("label_25"));

        gridLayout_3->addWidget(label_25, 2, 0, 1, 1);

        slider_hz = new QSlider(widget_8);
        slider_hz->setObjectName(QStringLiteral("slider_hz"));
        slider_hz->setEnabled(false);
        slider_hz->setMinimum(-99);
        slider_hz->setOrientation(Qt::Horizontal);
        slider_hz->setTickPosition(QSlider::TicksBothSides);
        slider_hz->setTickInterval(1);

        gridLayout_3->addWidget(slider_hz, 2, 1, 1, 1);

        monitorSync = new QPushButton(widget_8);
        monitorSync->setObjectName(QStringLiteral("monitorSync"));

        gridLayout_3->addWidget(monitorSync, 5, 1, 1, 1);


        verticalLayout_6->addLayout(gridLayout_3);

        groupBox_2 = new QGroupBox(widget_8);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(0, 60));

        verticalLayout_6->addWidget(groupBox_2);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_3);

        splitter_2->addWidget(widget_8);
        verticalLayoutWidget_2 = new QWidget(splitter_2);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        gridLayout_5 = new QGridLayout(verticalLayoutWidget_2);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        SWR_max = new BarGraph(verticalLayoutWidget_2);
        SWR_max->setObjectName(QStringLiteral("SWR_max"));
        sizePolicy3.setHeightForWidth(SWR_max->sizePolicy().hasHeightForWidth());
        SWR_max->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(SWR_max, 2, 4, 1, 1);

        label_19 = new QLabel(verticalLayoutWidget_2);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_5->addWidget(label_19, 4, 2, 1, 1);

        label_18 = new QLabel(verticalLayoutWidget_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_18, 6, 0, 1, 1);

        label_21 = new QLabel(verticalLayoutWidget_2);
        label_21->setObjectName(QStringLiteral("label_21"));

        gridLayout_5->addWidget(label_21, 6, 2, 1, 1);

        R_lbl = new QLabel(verticalLayoutWidget_2);
        R_lbl->setObjectName(QStringLiteral("R_lbl"));
        R_lbl->setMinimumSize(QSize(70, 0));
        R_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(R_lbl, 5, 1, 1, 1);

        label_20 = new QLabel(verticalLayoutWidget_2);
        label_20->setObjectName(QStringLiteral("label_20"));

        gridLayout_5->addWidget(label_20, 5, 2, 1, 1);

        label_17 = new QLabel(verticalLayoutWidget_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_17, 5, 0, 1, 1);

        SWR_Bar = new BarGraph(verticalLayoutWidget_2);
        SWR_Bar->setObjectName(QStringLiteral("SWR_Bar"));
        sizePolicy3.setHeightForWidth(SWR_Bar->sizePolicy().hasHeightForWidth());
        SWR_Bar->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(SWR_Bar, 0, 4, 1, 1);

        Z_Bar = new BarGraph(verticalLayoutWidget_2);
        Z_Bar->setObjectName(QStringLiteral("Z_Bar"));
        sizePolicy3.setHeightForWidth(Z_Bar->sizePolicy().hasHeightForWidth());
        Z_Bar->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(Z_Bar, 4, 4, 1, 1);

        Z_lbl = new QLabel(verticalLayoutWidget_2);
        Z_lbl->setObjectName(QStringLiteral("Z_lbl"));
        Z_lbl->setMinimumSize(QSize(70, 0));
        Z_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(Z_lbl, 4, 1, 1, 1, Qt::AlignRight);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 7, 4, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 7, 0, 1, 3);

        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        sizePolicy2.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy2);

        gridLayout_5->addWidget(label_15, 0, 0, 1, 1);

        X_lbl = new QLabel(verticalLayoutWidget_2);
        X_lbl->setObjectName(QStringLiteral("X_lbl"));
        X_lbl->setMinimumSize(QSize(70, 0));
        X_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(X_lbl, 6, 1, 1, 1);

        R_Bar = new BarGraph(verticalLayoutWidget_2);
        R_Bar->setObjectName(QStringLiteral("R_Bar"));
        sizePolicy3.setHeightForWidth(R_Bar->sizePolicy().hasHeightForWidth());
        R_Bar->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(R_Bar, 5, 4, 1, 1);

        X_Bar = new BarGraph(verticalLayoutWidget_2);
        X_Bar->setObjectName(QStringLiteral("X_Bar"));
        sizePolicy3.setHeightForWidth(X_Bar->sizePolicy().hasHeightForWidth());
        X_Bar->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(X_Bar, 6, 4, 1, 1);

        label_16 = new QLabel(verticalLayoutWidget_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_16, 4, 0, 1, 1);

        SWR_min = new BarGraph(verticalLayoutWidget_2);
        SWR_min->setObjectName(QStringLiteral("SWR_min"));
        sizePolicy3.setHeightForWidth(SWR_min->sizePolicy().hasHeightForWidth());
        SWR_min->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(SWR_min, 1, 4, 1, 1);

        label_29 = new QLabel(verticalLayoutWidget_2);
        label_29->setObjectName(QStringLiteral("label_29"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy4);
        label_29->setMaximumSize(QSize(40, 16777215));
        label_29->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_29, 1, 0, 1, 1);

        label_30 = new QLabel(verticalLayoutWidget_2);
        label_30->setObjectName(QStringLiteral("label_30"));
        sizePolicy4.setHeightForWidth(label_30->sizePolicy().hasHeightForWidth());
        label_30->setSizePolicy(sizePolicy4);
        label_30->setMaximumSize(QSize(40, 16777215));
        label_30->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_30, 2, 0, 1, 1);

        SWR_lbl = new QLabel(verticalLayoutWidget_2);
        SWR_lbl->setObjectName(QStringLiteral("SWR_lbl"));
        SWR_lbl->setMinimumSize(QSize(70, 0));
        SWR_lbl->setMaximumSize(QSize(150, 16777215));
        SWR_lbl->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(SWR_lbl, 0, 1, 1, 2);

        dip = new QLabel(verticalLayoutWidget_2);
        dip->setObjectName(QStringLiteral("dip"));
        sizePolicy1.setHeightForWidth(dip->sizePolicy().hasHeightForWidth());
        dip->setSizePolicy(sizePolicy1);
        dip->setMinimumSize(QSize(0, 0));
        dip->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(dip, 1, 1, 1, 2);

        peak = new QLabel(verticalLayoutWidget_2);
        peak->setObjectName(QStringLiteral("peak"));
        peak->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(peak, 2, 1, 1, 2);

        label_27 = new QLabel(verticalLayoutWidget_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_27, 3, 0, 1, 1);

        delta = new QLabel(verticalLayoutWidget_2);
        delta->setObjectName(QStringLiteral("delta"));
        delta->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(delta, 3, 1, 1, 2);

        SWR_delta = new BarGraph(verticalLayoutWidget_2);
        SWR_delta->setObjectName(QStringLiteral("SWR_delta"));
        sizePolicy3.setHeightForWidth(SWR_delta->sizePolicy().hasHeightForWidth());
        SWR_delta->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(SWR_delta, 3, 4, 1, 1);

        splitter_2->addWidget(verticalLayoutWidget_2);

        verticalLayout_8->addWidget(splitter_2);

        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        splitter = new QSplitter(tab);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        widget = new QWidget(splitter);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMaximumSize(QSize(260, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 1);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        fend_disp = new QLabel(widget);
        fend_disp->setObjectName(QStringLiteral("fend_disp"));

        gridLayout->addWidget(fend_disp, 6, 1, 1, 1);

        fcentre = new QDoubleSpinBox(widget);
        fcentre->setObjectName(QStringLiteral("fcentre"));
        fcentre->setDecimals(6);
        fcentre->setMaximum(60);
        fcentre->setSingleStep(1);
        fcentre->setValue(14);

        gridLayout->addWidget(fcentre, 2, 1, 1, 1);

        abc = new QLabel(widget);
        abc->setObjectName(QStringLiteral("abc"));

        gridLayout->addWidget(abc, 8, 1, 1, 1);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_7, 5, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy2.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_2, 5, 0, 1, 1);

        fstep_disp = new QLabel(widget);
        fstep_disp->setObjectName(QStringLiteral("fstep_disp"));

        gridLayout->addWidget(fstep_disp, 7, 1, 1, 1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_8, 6, 2, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label, 2, 0, 1, 1);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy2.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_3, 6, 0, 1, 1);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy2.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_9, 4, 2, 1, 1);

        label_22 = new QLabel(widget);
        label_22->setObjectName(QStringLiteral("label_22"));

        gridLayout->addWidget(label_22, 8, 0, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_10, 3, 2, 1, 1);

        useraw_chk = new QCheckBox(widget);
        useraw_chk->setObjectName(QStringLiteral("useraw_chk"));
        useraw_chk->setChecked(true);

        gridLayout->addWidget(useraw_chk, 9, 0, 1, 3);

        onno = new QSpinBox(widget);
        onno->setObjectName(QStringLiteral("onno"));
        onno->setMinimum(1);
        onno->setMaximum(1000);
        onno->setSingleStep(1);
        onno->setValue(5);

        gridLayout->addWidget(onno, 4, 1, 1, 1);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        sizePolicy2.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(label_11, 3, 0, 1, 1);

        fstart_disp = new QLabel(widget);
        fstart_disp->setObjectName(QStringLiteral("fstart_disp"));

        gridLayout->addWidget(fstart_disp, 5, 1, 1, 1);

        band_cb = new QComboBox(widget);
        band_cb->setObjectName(QStringLiteral("band_cb"));

        gridLayout->addWidget(band_cb, 0, 1, 1, 2);

        fspan = new QDoubleSpinBox(widget);
        fspan->setObjectName(QStringLiteral("fspan"));
        fspan->setDecimals(6);
        fspan->setMinimum(0.05);
        fspan->setMaximum(58);
        fspan->setSingleStep(0.05);
        fspan->setValue(0.5);

        gridLayout->addWidget(fspan, 3, 1, 1, 1);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 0, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(-1, 10, -1, 10);
        mhz = new QRadioButton(widget);
        buttonGroup = new QButtonGroup(MainWindow);
        buttonGroup->setObjectName(QStringLiteral("buttonGroup"));
        buttonGroup->addButton(mhz);
        mhz->setObjectName(QStringLiteral("mhz"));
        mhz->setChecked(true);

        horizontalLayout_6->addWidget(mhz);

        khz100 = new QRadioButton(widget);
        buttonGroup->addButton(khz100);
        khz100->setObjectName(QStringLiteral("khz100"));

        horizontalLayout_6->addWidget(khz100);

        khz10 = new QRadioButton(widget);
        buttonGroup->addButton(khz10);
        khz10->setObjectName(QStringLiteral("khz10"));

        horizontalLayout_6->addWidget(khz10);

        khz = new QRadioButton(widget);
        buttonGroup->addButton(khz);
        khz->setObjectName(QStringLiteral("khz"));

        horizontalLayout_6->addWidget(khz);


        gridLayout->addLayout(horizontalLayout_6, 1, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        scanBtn = new QPushButton(widget);
        scanBtn->setObjectName(QStringLiteral("scanBtn"));

        horizontalLayout_3->addWidget(scanBtn);

        progressBar = new QProgressBar(widget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setEnabled(false);
        sizePolicy.setHeightForWidth(progressBar->sizePolicy().hasHeightForWidth());
        progressBar->setSizePolicy(sizePolicy);
        progressBar->setMaximumSize(QSize(100, 24));
        progressBar->setValue(0);

        horizontalLayout_3->addWidget(progressBar);


        verticalLayout->addLayout(horizontalLayout_3);

        syncCentre = new QPushButton(widget);
        syncCentre->setObjectName(QStringLiteral("syncCentre"));

        verticalLayout->addWidget(syncCentre);

        pushButton5khz = new QPushButton(widget);
        pushButton5khz->setObjectName(QStringLiteral("pushButton5khz"));

        verticalLayout->addWidget(pushButton5khz);

        pushButton20khz = new QPushButton(widget);
        pushButton20khz->setObjectName(QStringLiteral("pushButton20khz"));

        verticalLayout->addWidget(pushButton20khz);

        pushButton50khz = new QPushButton(widget);
        pushButton50khz->setObjectName(QStringLiteral("pushButton50khz"));

        verticalLayout->addWidget(pushButton50khz);

        pushButton100khz = new QPushButton(widget);
        pushButton100khz->setObjectName(QStringLiteral("pushButton100khz"));

        verticalLayout->addWidget(pushButton100khz);

        widget_7 = new QWidget(widget);
        widget_7->setObjectName(QStringLiteral("widget_7"));

        verticalLayout->addWidget(widget_7);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setVerticalSpacing(0);
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        plotx_chk = new QCheckBox(groupBox);
        plotx_chk->setObjectName(QStringLiteral("plotx_chk"));
        plotx_chk->setChecked(true);

        gridLayout_2->addWidget(plotx_chk, 4, 0, 1, 1);

        plotz_chk = new QCheckBox(groupBox);
        plotz_chk->setObjectName(QStringLiteral("plotz_chk"));
        plotz_chk->setChecked(true);

        gridLayout_2->addWidget(plotz_chk, 2, 0, 1, 1);

        widget_5 = new QWidget(groupBox);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setMaximumSize(QSize(24, 16777215));
        QPalette palette;
        QBrush brush(QColor(243, 243, 243, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(255, 191, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        widget_5->setPalette(palette);
        widget_5->setAutoFillBackground(true);

        gridLayout_2->addWidget(widget_5, 2, 1, 1, 1);

        widget_4 = new QWidget(groupBox);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setMaximumSize(QSize(24, 16777215));
        QPalette palette1;
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        QBrush brush3(QColor(0, 0, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        widget_4->setPalette(palette1);
        widget_4->setAutoFillBackground(true);

        gridLayout_2->addWidget(widget_4, 0, 1, 1, 1);

        widget_6 = new QWidget(groupBox);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setMaximumSize(QSize(24, 16777215));
        QPalette palette2;
        QBrush brush4(QColor(255, 0, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush4);
        widget_6->setPalette(palette2);
        widget_6->setAutoFillBackground(true);

        gridLayout_2->addWidget(widget_6, 4, 1, 1, 1);

        widget_3 = new QWidget(groupBox);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMaximumSize(QSize(24, 16777215));
        QPalette palette3;
        QBrush brush5(QColor(0, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush5);
        widget_3->setPalette(palette3);
        widget_3->setAutoFillBackground(true);

        gridLayout_2->addWidget(widget_3, 3, 1, 1, 1);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(false);
        checkBox->setChecked(true);

        gridLayout_2->addWidget(checkBox, 0, 0, 1, 1);

        plotr_chk = new QCheckBox(groupBox);
        plotr_chk->setObjectName(QStringLiteral("plotr_chk"));
        plotr_chk->setChecked(true);

        gridLayout_2->addWidget(plotr_chk, 3, 0, 1, 1);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 109, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        splitter->addWidget(widget);
        verticalLayoutWidget = new QWidget(splitter);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        canvas1 = new GraphCanvas(verticalLayoutWidget);
        canvas1->setObjectName(QStringLiteral("canvas1"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        canvas1->setPalette(palette4);
        canvas1->setFrameShape(QFrame::Panel);
        canvas1->setFrameShadow(QFrame::Sunken);
        canvas1->setLineWidth(2);
        cursor = new GraphCursor(canvas1);
        cursor->setObjectName(QStringLiteral("cursor"));
        cursor->setGeometry(QRect(0, 0, 120, 80));

        verticalLayout_2->addWidget(canvas1);

        widget_2 = new QWidget(verticalLayoutWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(16777215, 20));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(widget_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout->addWidget(label_12);

        swr_min_disp = new QLabel(widget_2);
        swr_min_disp->setObjectName(QStringLiteral("swr_min_disp"));

        horizontalLayout->addWidget(swr_min_disp);

        horizontalSpacer = new QSpacerItem(379, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cursor_disp = new QLabel(widget_2);
        cursor_disp->setObjectName(QStringLiteral("cursor_disp"));

        horizontalLayout->addWidget(cursor_disp);


        verticalLayout_2->addWidget(widget_2);

        splitter->addWidget(verticalLayoutWidget);

        verticalLayout_4->addWidget(splitter);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        horizontalLayout_2 = new QHBoxLayout(tab_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        scan_data = new QTableWidget(tab_2);
        if (scan_data->columnCount() < 5)
            scan_data->setColumnCount(5);
        scan_data->setObjectName(QStringLiteral("scan_data"));
        scan_data->setColumnCount(5);

        horizontalLayout_2->addWidget(scan_data);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        copyBtn = new QPushButton(tab_2);
        copyBtn->setObjectName(QStringLiteral("copyBtn"));

        verticalLayout_5->addWidget(copyBtn);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_5);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        formLayout = new QFormLayout(tab_3);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_14 = new QLabel(tab_3);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_14);

        notes_txt = new QPlainTextEdit(tab_3);
        notes_txt->setObjectName(QStringLiteral("notes_txt"));

        formLayout->setWidget(0, QFormLayout::FieldRole, notes_txt);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_3->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1179, 26));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuLink = new QMenu(menuBar);
        menuLink->setObjectName(QStringLiteral("menuLink"));
        menuDevice = new QMenu(menuLink);
        menuDevice->setObjectName(QStringLiteral("menuDevice"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuLink->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(actionAbout_QT);
        menuHelp->addAction(actionAbout_Analyzer);
        menuLink->addAction(menuDevice->menuAction());
        menuDevice->addAction(actionDevices);
        menuFile->addAction(actionLoad);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionSettings);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionAbout_QT->setText(QApplication::translate("MainWindow", "About QT", 0));
        actionDevices->setText(QApplication::translate("MainWindow", "devices", 0));
        actionLoad->setText(QApplication::translate("MainWindow", "Load", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionAbout_Analyzer->setText(QApplication::translate("MainWindow", "About Antenna Analyzer", 0));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0));
        monfreq->setSuffix(QApplication::translate("MainWindow", " MHz", 0));
        label_23->setText(QApplication::translate("MainWindow", "Freq", 0));
        label_26->setText(QApplication::translate("MainWindow", "Rate", 0));
        monrate->setSuffix(QApplication::translate("MainWindow", " ms", 0));
        label_24->setText(QApplication::translate("MainWindow", "Step", 0));
        mon_10khz->setText(QApplication::translate("MainWindow", "10KHz", 0));
        mon_mhz->setText(QApplication::translate("MainWindow", "MHz", 0));
        mon_100khz->setText(QApplication::translate("MainWindow", "100KHz", 0));
        mon_1khz->setText(QApplication::translate("MainWindow", "KHz", 0));
        mon_100hz->setText(QApplication::translate("MainWindow", "100Hz", 0));
        mon_10hz->setText(QApplication::translate("MainWindow", "10Hz", 0));
        monStartBtn->setText(QApplication::translate("MainWindow", "Start", 0));
        label_25->setText(QApplication::translate("MainWindow", "Hz", 0));
        monitorSync->setText(QApplication::translate("MainWindow", "Sync with sweep center", 0));
        groupBox_2->setTitle(QString());
        label_19->setText(QApplication::translate("MainWindow", "\316\251", 0));
        label_18->setText(QApplication::translate("MainWindow", "X", 0));
        label_21->setText(QApplication::translate("MainWindow", "\316\251", 0));
        R_lbl->setText(QApplication::translate("MainWindow", "50", 0));
        label_20->setText(QApplication::translate("MainWindow", "\316\251", 0));
        label_17->setText(QApplication::translate("MainWindow", "R", 0));
        Z_lbl->setText(QApplication::translate("MainWindow", "50", 0));
        label_15->setText(QApplication::translate("MainWindow", "VSWR", 0));
        X_lbl->setText(QApplication::translate("MainWindow", "0", 0));
        label_16->setText(QApplication::translate("MainWindow", "Z", 0));
        label_29->setText(QApplication::translate("MainWindow", "min", 0));
        label_30->setText(QApplication::translate("MainWindow", "max", 0));
        SWR_lbl->setText(QApplication::translate("MainWindow", "10:1", 0));
        dip->setText(QApplication::translate("MainWindow", "10:1", 0));
        peak->setText(QApplication::translate("MainWindow", "10:1", 0));
        label_27->setText(QApplication::translate("MainWindow", "delta", 0));
        delta->setText(QApplication::translate("MainWindow", "0%", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Fixed", 0));
        fend_disp->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_4->setText(QApplication::translate("MainWindow", "Step", 0));
        label_7->setText(QApplication::translate("MainWindow", "MHz", 0));
        label_2->setText(QApplication::translate("MainWindow", "Start", 0));
        fstep_disp->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_8->setText(QApplication::translate("MainWindow", "MHz", 0));
        label->setText(QApplication::translate("MainWindow", "Center", 0));
        label_6->setText(QApplication::translate("MainWindow", "MHz", 0));
        label_3->setText(QApplication::translate("MainWindow", "End", 0));
        label_5->setText(QApplication::translate("MainWindow", "Graph", 0));
        label_9->setText(QApplication::translate("MainWindow", "KHz", 0));
        label_22->setText(QApplication::translate("MainWindow", "Scan", 0));
        label_10->setText(QApplication::translate("MainWindow", "MHz", 0));
        useraw_chk->setText(QApplication::translate("MainWindow", "Use raw bridge data", 0));
        label_11->setText(QApplication::translate("MainWindow", "Span", 0));
        fstart_disp->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        band_cb->clear();
        band_cb->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Custom", 0)
         << QApplication::translate("MainWindow", "160m", 0)
         << QApplication::translate("MainWindow", "80m", 0)
         << QApplication::translate("MainWindow", "40m", 0)
         << QApplication::translate("MainWindow", "30m", 0)
         << QApplication::translate("MainWindow", "25m", 0)
         << QApplication::translate("MainWindow", "20m", 0)
         << QApplication::translate("MainWindow", "17m", 0)
         << QApplication::translate("MainWindow", "15m", 0)
         << QApplication::translate("MainWindow", "12m", 0)
         << QApplication::translate("MainWindow", "11m (CB)", 0)
         << QApplication::translate("MainWindow", "10m", 0)
         << QApplication::translate("MainWindow", "10m", 0)
         << QApplication::translate("MainWindow", "8m", 0)
         << QApplication::translate("MainWindow", "6m", 0)
         << QApplication::translate("MainWindow", "Full (1-60MHz)", 0)
         << QApplication::translate("MainWindow", "HF (3-30MHz)", 0)
         << QApplication::translate("MainWindow", "12-10m (25-30MHz)", 0)
        );
        label_13->setText(QApplication::translate("MainWindow", "Band", 0));
        mhz->setText(QApplication::translate("MainWindow", "1M", 0));
        khz100->setText(QApplication::translate("MainWindow", "100K", 0));
        khz10->setText(QApplication::translate("MainWindow", "10K", 0));
        khz->setText(QApplication::translate("MainWindow", "1K", 0));
        scanBtn->setText(QApplication::translate("MainWindow", "Scan", 0));
        syncCentre->setText(QApplication::translate("MainWindow", "Sync center with lowest swr point", 0));
        pushButton5khz->setText(QApplication::translate("MainWindow", "+/- 5KHz sweep around center freq", 0));
        pushButton20khz->setText(QApplication::translate("MainWindow", "+/- 20KHz sweep around center freq", 0));
        pushButton50khz->setText(QApplication::translate("MainWindow", "+/- 50KHz sweep around center freq", 0));
        pushButton100khz->setText(QApplication::translate("MainWindow", "+/- 100KHz sweep around center freq", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Plot", 0));
        plotx_chk->setText(QApplication::translate("MainWindow", "X", 0));
        plotz_chk->setText(QApplication::translate("MainWindow", "Z", 0));
        checkBox->setText(QApplication::translate("MainWindow", "VSWR", 0));
        plotr_chk->setText(QApplication::translate("MainWindow", "R", 0));
        label_12->setText(QApplication::translate("MainWindow", "SWR Min:", 0));
        swr_min_disp->setText(QApplication::translate("MainWindow", "1", 0));
        cursor_disp->setText(QApplication::translate("MainWindow", "Cursor data when graph is completed", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Sweep", 0));
        copyBtn->setText(QApplication::translate("MainWindow", "Copy Data", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Data", 0));
        label_14->setText(QApplication::translate("MainWindow", "Notes", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Info", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
        menuLink->setTitle(QApplication::translate("MainWindow", "Link", 0));
        menuDevice->setTitle(QApplication::translate("MainWindow", "Device", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
