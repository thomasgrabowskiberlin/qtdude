#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "config.h"
#include <ui_dialog.h>
#include <QMainWindow>


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


private:
    Ui::MainWindow *ui;
    Ui_Dialog *dialogUI = new Ui_Dialog;
    QDialog *SettingsWindow = new QDialog;


};

#endif // MAINWINDOW_H
