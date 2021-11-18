/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCallAvrDude;
    QAction *actionOpen_Hexfile;
    QAction *actionLoad_Config;
    QAction *actionSave_Hexfile;
    QAction *actionSave_Config;
    QAction *actionQuit;
    QAction *actionPath_to_extern_Tools;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QGroupBox *groupBox;
    QComboBox *comboBox_3;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_5;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QComboBox *comboBox_4;
    QComboBox *comboBox_5;
    QComboBox *comboBox_6;
    QCheckBox *checkBox_7;
    QCheckBox *checkBox_8;
    QCheckBox *checkBox_9;
    QCheckBox *checkBox_10;
    QCheckBox *checkBox_11;
    QCheckBox *checkBox_12;
    QCheckBox *checkBox_13;
    QWidget *tab_2;
    QTextEdit *textEdit;
    QWidget *tab_3;
    QWidget *tab_4;
    QTextBrowser *textBrowser;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuView;
    QMenu *menuTols;
    QMenu *menuHelp;
    QMenu *menuSettings;
    QMenu *menuHelp_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(684, 493);
        actionCallAvrDude = new QAction(MainWindow);
        actionCallAvrDude->setObjectName(QString::fromUtf8("actionCallAvrDude"));
        actionOpen_Hexfile = new QAction(MainWindow);
        actionOpen_Hexfile->setObjectName(QString::fromUtf8("actionOpen_Hexfile"));
        actionLoad_Config = new QAction(MainWindow);
        actionLoad_Config->setObjectName(QString::fromUtf8("actionLoad_Config"));
        actionSave_Hexfile = new QAction(MainWindow);
        actionSave_Hexfile->setObjectName(QString::fromUtf8("actionSave_Hexfile"));
        actionSave_Config = new QAction(MainWindow);
        actionSave_Config->setObjectName(QString::fromUtf8("actionSave_Config"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionPath_to_extern_Tools = new QAction(MainWindow);
        actionPath_to_extern_Tools->setObjectName(QString::fromUtf8("actionPath_to_extern_Tools"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 661, 251));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 10, 83, 25));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 40, 83, 25));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(560, 190, 83, 25));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(560, 150, 83, 25));
        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 190, 531, 25));
        pushButton_6 = new QPushButton(tab);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(560, 70, 80, 25));
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(560, 100, 83, 25));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 541, 181));
        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(20, 150, 131, 25));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(20, 50, 131, 25));
        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(20, 100, 131, 25));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(320, 50, 113, 25));
        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(420, 50, 21, 25));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(20, 30, 131, 23));
        checkBox->setChecked(true);
        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(20, 80, 131, 23));
        checkBox_2->setChecked(true);
        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(320, 30, 131, 23));
        checkBox_3->setChecked(true);
        checkBox_4 = new QCheckBox(groupBox);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(20, 130, 89, 23));
        checkBox_4->setChecked(true);
        pushButton_8 = new QPushButton(groupBox);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(450, 150, 83, 25));
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(450, 120, 83, 25));
        checkBox_5 = new QCheckBox(groupBox);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(180, 30, 89, 23));
        checkBox_6 = new QCheckBox(groupBox);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(180, 80, 89, 23));
        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(180, 50, 86, 25));
        comboBox_5 = new QComboBox(groupBox);
        comboBox_5->setObjectName(QString::fromUtf8("comboBox_5"));
        comboBox_5->setGeometry(QRect(180, 100, 86, 25));
        comboBox_6 = new QComboBox(groupBox);
        comboBox_6->setObjectName(QString::fromUtf8("comboBox_6"));
        comboBox_6->setGeometry(QRect(180, 150, 86, 25));
        checkBox_7 = new QCheckBox(groupBox);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(180, 130, 89, 23));
        checkBox_8 = new QCheckBox(groupBox);
        checkBox_8->setObjectName(QString::fromUtf8("checkBox_8"));
        checkBox_8->setGeometry(QRect(270, 40, 41, 23));
        checkBox_9 = new QCheckBox(groupBox);
        checkBox_9->setObjectName(QString::fromUtf8("checkBox_9"));
        checkBox_9->setGeometry(QRect(270, 60, 41, 23));
        checkBox_10 = new QCheckBox(groupBox);
        checkBox_10->setObjectName(QString::fromUtf8("checkBox_10"));
        checkBox_10->setGeometry(QRect(270, 90, 41, 23));
        checkBox_11 = new QCheckBox(groupBox);
        checkBox_11->setObjectName(QString::fromUtf8("checkBox_11"));
        checkBox_11->setGeometry(QRect(270, 110, 41, 23));
        checkBox_12 = new QCheckBox(groupBox);
        checkBox_12->setObjectName(QString::fromUtf8("checkBox_12"));
        checkBox_12->setGeometry(QRect(270, 140, 41, 23));
        checkBox_13 = new QCheckBox(groupBox);
        checkBox_13->setObjectName(QString::fromUtf8("checkBox_13"));
        checkBox_13->setGeometry(QRect(270, 160, 41, 23));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textEdit = new QTextEdit(tab_2);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(0, 0, 651, 211));
        QFont font;
        font.setFamily(QString::fromUtf8("Terminus"));
        font.setBold(true);
        font.setWeight(75);
        textEdit->setFont(font);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 261, 661, 181));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 684, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuTols = new QMenu(menuBar);
        menuTols->setObjectName(QString::fromUtf8("menuTols"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuSettings = new QMenu(menuBar);
        menuSettings->setObjectName(QString::fromUtf8("menuSettings"));
        menuHelp_2 = new QMenu(menuBar);
        menuHelp_2->setObjectName(QString::fromUtf8("menuHelp_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuTols->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuBar->addAction(menuSettings->menuAction());
        menuBar->addAction(menuHelp_2->menuAction());
        menuFile->addAction(actionOpen_Hexfile);
        menuFile->addSeparator();
        menuFile->addAction(actionLoad_Config);
        menuFile->addAction(actionSave_Hexfile);
        menuFile->addAction(actionSave_Config);
        menuFile->addAction(actionQuit);
        menuSettings->addAction(actionPath_to_extern_Tools);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Avrdude Frontend", nullptr));
        actionCallAvrDude->setText(QApplication::translate("MainWindow", "CallAvrDude", nullptr));
        actionOpen_Hexfile->setText(QApplication::translate("MainWindow", "&Open Hexfile", nullptr));
        actionLoad_Config->setText(QApplication::translate("MainWindow", "&Load Config", nullptr));
        actionSave_Hexfile->setText(QApplication::translate("MainWindow", "&Save Hexfile", nullptr));
        actionSave_Config->setText(QApplication::translate("MainWindow", "Save &Config", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "&Quit", nullptr));
        actionPath_to_extern_Tools->setText(QApplication::translate("MainWindow", "&Path to extern Tools", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Info", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Get Devices", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Execute", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        lineEdit_2->setText(QApplication::translate("MainWindow", "avrdude -carduino -p m328p -P/dev/ttyUSB0 -b57600 ", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Erase Chip", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Read Flash", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Parameter", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "...", nullptr));
        checkBox->setText(QApplication::translate("MainWindow", "AVR Devices", nullptr));
        checkBox_2->setText(QApplication::translate("MainWindow", "Programmer", nullptr));
        checkBox_3->setText(QApplication::translate("MainWindow", "Hexfile", nullptr));
        checkBox_4->setText(QApplication::translate("MainWindow", "Port", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "Set Params", nullptr));
        checkBox_5->setText(QApplication::translate("MainWindow", "LFUSE", nullptr));
        checkBox_6->setText(QApplication::translate("MainWindow", "HFUSE", nullptr));
        checkBox_7->setText(QApplication::translate("MainWindow", "EFUSE", nullptr));
        checkBox_8->setText(QApplication::translate("MainWindow", "R", nullptr));
        checkBox_9->setText(QApplication::translate("MainWindow", "W", nullptr));
        checkBox_10->setText(QApplication::translate("MainWindow", "R", nullptr));
        checkBox_11->setText(QApplication::translate("MainWindow", "W", nullptr));
        checkBox_12->setText(QApplication::translate("MainWindow", "R", nullptr));
        checkBox_13->setText(QApplication::translate("MainWindow", "W", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "AVR-Dude", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Hex Dump", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Fuses", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Config File", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "Fi&le", nullptr));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", nullptr));
        menuView->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        menuTols->setTitle(QApplication::translate("MainWindow", "&Tools", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "O&ptions", nullptr));
        menuSettings->setTitle(QApplication::translate("MainWindow", "Setti&ngs", nullptr));
        menuHelp_2->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
