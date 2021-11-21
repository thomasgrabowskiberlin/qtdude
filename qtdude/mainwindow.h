#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "config.h"
#include <ui_dialog.h>
#include <QMainWindow>
#include <QTimer>

#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    std::vector<QObject> *vecControls;
    QTimer *timer1;
    QList<QSerialPortInfo> com_ports;

private slots:
    void AvrDudeInfoButton();
    void AvrDudeReadDevices();
    void AvrDudeCmdExecute();
    void ToolSettings();
    void Quit();
    void SaveFile();
    void LoadHexFile();
    void ReadFlash();
    void UpdateSettings();
    void TimerUpdate();

private:
    Ui::MainWindow *ui;
    Ui_Dialog *dialogUI = new Ui_Dialog;
    QDialog *SettingsWindow = new QDialog;


};

#endif // MAINWINDOW_H
