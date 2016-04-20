/********************************************************************************
** Form generated from reading UI file 'settingsdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDLG_H
#define UI_SETTINGSDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SettingsDlg
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *SettingsTabs;
    QWidget *tab;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QDoubleSpinBox *swr_bw_max;
    QSpacerItem *verticalSpacer;
    QDoubleSpinBox *Z_Target;
    QDoubleSpinBox *swr_max;
    QLabel *label_4;
    QWidget *tab_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDlg)
    {
        if (SettingsDlg->objectName().isEmpty())
            SettingsDlg->setObjectName(QStringLiteral("SettingsDlg"));
        SettingsDlg->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/128/antenna-charge-radio-128.png"), QSize(), QIcon::Normal, QIcon::Off);
        SettingsDlg->setWindowIcon(icon);
        SettingsDlg->setModal(true);
        verticalLayout = new QVBoxLayout(SettingsDlg);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        SettingsTabs = new QTabWidget(SettingsDlg);
        SettingsTabs->setObjectName(QStringLiteral("SettingsTabs"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        gridLayout = new QGridLayout(tab);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label_3, 2, 2, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        swr_bw_max = new QDoubleSpinBox(tab);
        swr_bw_max->setObjectName(QStringLiteral("swr_bw_max"));
        swr_bw_max->setDecimals(1);
        swr_bw_max->setMinimum(1);
        swr_bw_max->setMaximum(9.9);
        swr_bw_max->setSingleStep(0.1);
        swr_bw_max->setValue(1.5);

        gridLayout->addWidget(swr_bw_max, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(357, 123, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 3);

        Z_Target = new QDoubleSpinBox(tab);
        Z_Target->setObjectName(QStringLiteral("Z_Target"));
        Z_Target->setMaximum(9999.99);
        Z_Target->setValue(50);

        gridLayout->addWidget(Z_Target, 2, 1, 1, 1);

        swr_max = new QDoubleSpinBox(tab);
        swr_max->setObjectName(QStringLiteral("swr_max"));
        swr_max->setDecimals(1);
        swr_max->setMinimum(3);
        swr_max->setMaximum(100);
        swr_max->setSingleStep(0.1);
        swr_max->setValue(10);

        gridLayout->addWidget(swr_max, 0, 1, 1, 1);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        SettingsTabs->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        SettingsTabs->addTab(tab_2, QString());

        verticalLayout->addWidget(SettingsTabs);

        buttonBox = new QDialogButtonBox(SettingsDlg);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(SettingsDlg);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDlg, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDlg, SLOT(reject()));

        SettingsTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SettingsDlg);
    } // setupUi

    void retranslateUi(QDialog *SettingsDlg)
    {
        SettingsDlg->setWindowTitle(QApplication::translate("SettingsDlg", "Settings", 0));
        label_2->setText(QApplication::translate("SettingsDlg", "Target Impedence", 0));
        label_3->setText(QApplication::translate("SettingsDlg", "\316\251", 0));
        label->setText(QApplication::translate("SettingsDlg", "SWR Bandwidth Limit", 0));
        label_4->setText(QApplication::translate("SettingsDlg", "SWR Max", 0));
        SettingsTabs->setTabText(SettingsTabs->indexOf(tab), QApplication::translate("SettingsDlg", "Scan", 0));
        SettingsTabs->setTabText(SettingsTabs->indexOf(tab_2), QApplication::translate("SettingsDlg", "Monitor", 0));
    } // retranslateUi

};

namespace Ui {
    class SettingsDlg: public Ui_SettingsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDLG_H
