///////////////////////////////////////////////////////////
// avrdudeinterface.cpp
//
// class wrapping avrdude commands and piping the output
//
// Thomas Grabowski
// Lychener Str. 24
// 10437 Berlin
//
// July, 2019
///////////////////////////////////////////////////////////

#include "avrdudeinterface.h"
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>
#include <unistd.h>
#include <iostream>
#include <QDebug>
#include "misc.h"



AvrDude::AvrDude() {

}

AvrDude::~AvrDude() {

}

void AvrDude::SendAvrDudeCommand(std::string cmd, std::vector<std::string> *data) {
    FILE *fp;
    char outText[10350];

    //cmd.append(" 2>&1 | tee test.txt");
    cmd.append(" 2>&1");
    fp = popen(cmd.c_str(), "r");
    if (fp == nullptr) {
        printf("Failed to run command\n" );
        exit(1);
    }
    // Read the output a line at a time - output it.
    while (fgets(outText, sizeof(outText), fp) != nullptr) {
        data->push_back(outText);
    }
    pclose(fp);
}


void AvrDude::ChangeExecutePath(std::string newPath) {
    avrdude=newPath;
    std::cout << avrdude << std::endl;
}

void AvrDude::AvrDudeInfo(std::vector<std::string> *data) {

     std::string cmd=avrdude;
     SendAvrDudeCommand(cmd, data);
}

void AvrDude::AvrDudeExecuteCmd(std::vector<std::string> *data, std::string cmd)
{
    SendAvrDudeCommand(cmd,data);

}



void AvrDude::readFlashToFile(std::vector<std::string> *data, std::string prgmer,std::string device) {

    std::string cmd=avrdude+" -c ";
    cmd+=prgmer;
    cmd+=" -p ";
    cmd+=device;
    cmd+=" -U flash:r:blabla.hex:i";

    SendAvrDudeCommand(cmd, data);
    std::cout << cmd << std::endl;

}

void AvrDude::writeFlashToMCU() {
    //avrdude -c usbtiny -p m32 -B 1 -U flash:w:main.hex

}
int AvrDude::readDevices(std::vector<std::string> *data, unsigned char no)
{

    FILE *fp;
    FILE *foutp;
    int Filename=0;
    struct avrdude_params AVR_Params;
    int cnt=0;
    int numBytes=0;
    char buf[10350];
    char buf2[255];

    // Open the command for reading.
    std::string popenCMD=avrdude+" "+AvrDudeCmds[no];
    fp = popen(popenCMD.c_str(), "r");
    if (fp == nullptr) {
        std::cout << "Failed to run command\n";
        exit(1);
    }

    foutp=fopen("devices_portable.txt","wb");

    if (foutp==nullptr)
    {
        std::cout << "Error opening file!\n";
        return 1;
    }

    while (fgets(buf, sizeof(buf), fp) !=nullptr) {
        for( unsigned int i=0; i<strlen(buf); i++) {
            if (buf[i]=='=')
            {                
                numBytes++;
                parseBuffer(buf,i+1,buf2);      
                strcpy(AVR_Params.devices[cnt++],buf2);
                data->push_back(buf2);
                fwrite(buf2,1,strlen(buf2),foutp);
                break;
            }
        }
    }
    pclose(fp);
    close(Filename);

    return 0;
}

// Arduino Example:
// avrdude -carduino -p m328p -P/dev/ttyUSB0 -b57600


