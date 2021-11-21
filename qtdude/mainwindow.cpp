#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "avrdudeinterface.h"
#include <stdlib.h>
#include <vector>
#include <string>
#include <fstream>
#include <QString>
#include <QDebug>
#include <QThread>
#include <QMessageBox>
#include <QFileDialog>
#include <iterator>
#include <iostream>
#include <sstream>


static QSerialPortInfo port;
static class AvrDude *AVRDude;

static std::string avrdude_exec=PathAvrdude;
static std::vector<std::string> *avrdudeData;
static std::vector<std::string> *avrdudeDevices;
static std::vector<std::string> *avrdudeProgramers;




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    AVRDude=new AvrDude; // get memory for the class
    avrdudeData=new std::vector<std::string>;
    avrdudeDevices=new std::vector<std::string>;
    avrdudeProgramers=new std::vector<std::string>;
    timer1 = new QTimer(this);
    com_ports = QSerialPortInfo::availablePorts();

    vecControls=new std::vector<QObject>;
    // Fill here the vector with control objects which
    // are needed as parameters to assemble the command


    ui->setupUi(this);
    dialogUI->setupUi(SettingsWindow);

    foreach(port, com_ports)
    {
        ui->comboBox_3->addItem(port.portName());
    }
    AvrDudeReadDevices();
   // AvrDudeReadProgramers();

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(AvrDudeInfoButton()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(Quit()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(AvrDudeReadDevices()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(AvrDudeCmdExecute()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(LoadHexFile()));
    connect(ui->pushButton_7, SIGNAL(clicked()),this,SLOT(ReadFlash()));
    connect(ui->actionPath_to_extern_Tools,SIGNAL(triggered()),this,SLOT(ToolSettings()));
    connect(ui->actionSave_Hexfile,SIGNAL(triggered()),this,SLOT(SaveFile()));
    connect(ui->actionOpen_Hexfile,SIGNAL(triggered()),this,SLOT(LoadHexFile()));
    connect(dialogUI->pushButton_2,SIGNAL(clicked()),this,SLOT(UpdateSettings()));
    connect(timer1, SIGNAL(timeout()), this, SLOT(TimerUpdate())); // Timer Callback

    timer1->setInterval(1000);
    timer1->start();
}

MainWindow::~MainWindow()
{
    delete AVRDude;
    delete avrdudeData;
    delete avrdudeDevices;
    delete avrdudeProgramers;
    delete timer1;

    delete ui;
    delete dialogUI;
}

void MainWindow::AvrDudeInfoButton() {

    AVRDude->AvrDudeInfo(avrdudeData);
    QString qstr;

    ui->pushButton->setText("clicked");
    for(std::vector<std::string>::iterator iter=avrdudeData->begin(); iter<avrdudeData->end(); iter++)
    {
        qstr=QString::fromStdString(*iter);
        ui->textBrowser->append(qstr);
        //std::cout << "Out:" << *iter;
    }
    ui->pushButton->setText("Info");

}

void MainWindow::AvrDudeReadDevices() {
    QString qstr;

    AVRDude->readDevices(avrdudeDevices,0);
    AVRDude->readDevices(avrdudeProgramers,1);
    for(auto iter=avrdudeDevices->begin(); iter<avrdudeDevices->end(); iter++)
    {
        qstr=QString::fromStdString(*iter);
        ui->comboBox->addItem(qstr);
    }

    for(auto iter=avrdudeProgramers->begin(); iter<avrdudeProgramers->end(); iter++ )
    {
        qstr=QString::fromStdString(*iter);
        ui->comboBox_2->addItem(qstr);
    }
    int index=ui->comboBox_2->findText(StandardProgrammer.c_str());
    std::cout << StandardProgrammer << "=" << index << std::endl;
    ui->comboBox_2->setCurrentIndex(index);
    index=ui->comboBox->findText(StandardMCU.c_str());
    ui->comboBox->setCurrentIndex(index);

}

void MainWindow::ReadFlash() {
    QString qstr;
    QString prgmer; QString device;

    prgmer=ui->comboBox_2->currentText();
    device=ui->comboBox->currentText();
    AVRDude->readFlashToFile(avrdudeData,prgmer.toStdString(),device.toStdString());
    ui->lineEdit_2->setText("avrdude -c "+prgmer+" -p "+device+" -U flash:r:blabla.hex:i");

    for(std::vector<std::string>::iterator iter=avrdudeData->begin(); iter<avrdudeData->end(); iter++)
    {
        qstr=QString::fromStdString(*iter);
        ui->textBrowser->append(qstr);        
    }

    // avrdude -c arduino -p m328p -U flash:r:blabla.hex:i -P/dev/ttyUSB0 -b57600

}

void MainWindow::SaveFile()
{
    QFileDialog saveFile;
    QSize Dialogsize(300, 200);

    saveFile.resize(Dialogsize);

    QString fileName = saveFile.getSaveFileName(this,
                       tr("Save Hex/Elf File"), "",
                       tr("Intel Hex (*.hex);;All Files (*)"));

    if (fileName.isEmpty())
        return;
    else {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                                     file.errorString());
            return;
        }
        QDataStream out(&file);
        out.setVersion(QDataStream::Qt_4_5);
        out << "intel hex";
        out << "TestData";
    }

}

void MainWindow::LoadHexFile()
{
    QFileDialog loadHexFile;
    QSize Dialogsize(200, 100);

    loadHexFile.resize(Dialogsize);

    QString fileName = loadHexFile.getOpenFileName(this,
                       tr("Load Hex File"), "",
                       tr("Intel Hex (*.hex);;All Files (*)"));

    if (fileName.isEmpty())
        return;
    else {
        QFile file(fileName);

        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                                     file.errorString());
            return;
        }

        ui->lineEdit->setText(fileName);

        std::string line;
        std::ifstream myfile (fileName.toStdString());
        if (myfile.is_open())
        {
            while ( getline (myfile,line) )
            {
                std::cout << line << '\n';
                ui->textEdit->insertPlainText(QString(line.c_str()));
                ui->textEdit->insertPlainText("\n");
            }
        myfile.close();
        }
        else
            std::cout << "Unable to open file";
    }

}

void MainWindow::AvrDudeCmdExecute() {


    QString cmd;
    QString qstr;
    std::vector<std::string> params;
    int cnt=0;

    // avrdude -carduino -p m328p -P/dev/ttyUSB0 -b57600
    // avrdude -c arduino -p m328p -U flash:r:blabla.hex:i -P/dev/ttyUSB0 -b57600
    cmd=ui->lineEdit_2->text();

    /*
    QMessageBox::StandardButton reply;
      reply = QMessageBox::question(this, "Test", "Quit?",
                                    QMessageBox::Yes|QMessageBox::No);
      if (reply == QMessageBox::Yes) {
        qDebug() << "Yes was clicked";
        QApplication::quit();
      } else {
        qDebug() << "Yes was *not* clicked";
      }
    */


    QMessageBox msgBox;
    msgBox.setStyleSheet("background-color:#0F1418;color:white;font-size:11pt");
    msgBox.setText("Executing AVRDude command");
    msgBox.setWindowTitle("Please Wait...");
    msgBox.setWindowModality(Qt::WindowModal);
    msgBox.setVisible(true);
    msgBox.show();
     //SettingsWindow->show();
    msgBox.close();

    // put the params into a vector
      std::istringstream iss((cmd.toStdString()));
              std::vector<std::string> results((std::istream_iterator<std::string>(iss)),
                                             std::istream_iterator<std::string>());


        for( std::vector<std::string>::iterator iter=results.begin(); iter < results.end(); iter++) {
            if (cnt>0)
                params.push_back(*iter);
            cnt++;
        }


    AVRDude->AvrDudeExecuteCmd(avrdudeData,cmd.toStdString());

    std::cout << "Output:" << std::endl;
    for( std::vector<std::string>::iterator iter=params.begin(); iter < params.end(); iter++) std::cout << *iter << std::endl;


    for(std::vector<std::string>::iterator iter=avrdudeData->begin(); iter<avrdudeData->end(); iter++)
    {
        qstr=QString::fromStdString(*iter);
        ui->textBrowser->append(qstr);
    }
}

void MainWindow::ToolSettings() {
    SettingsWindow->show();
    dialogUI->lineEdit->setText(avrdude_exec.c_str());
}

void MainWindow::UpdateSettings() {
    avrdude_exec=dialogUI->lineEdit->text().toStdString();
    AVRDude->ChangeExecutePath(avrdude_exec);
    qDebug("Update Settings!\n");
}

void MainWindow::Quit() {
    qDebug("close Window!\n");
    SettingsWindow->close();
    this->close();
}

void MainWindow::TimerUpdate()
{


}

