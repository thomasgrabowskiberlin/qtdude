#ifndef AVRDUDEINTERFACE_H
#define AVRDUDEINTERFACE_H
#include <vector>
#include <string>
#include <array>

// memtypes for -U switch
/*
#define calibration  //One or more bytes of RC oscillator calibration data.
#define eeprom       //The EEPROM of the device.
#define efuse        //The extended fuse byte.
#define flash        //The flash ROM of the device.
#define fuse         //The fuse byte in devices that have only a single fuse byte.
#define hfuse        //The high fuse byte.
#define lfuse        //The low fuse byte.
#define lock         //The lock byte.
#define signature    //The three device signature bytes (device ID).
#define fuseN        //The fuse bytes of ATxmega devices, N is an integer number for each fuse supported by the device.
#define application  //The application flash area of ATxmega devices.
#define apptable     //The application table flash area of ATxmega devices.
#define boot         //The boot flash area of ATxmega devices.
#define prodsig      //The production signature (calibration) area of ATxmega devices.
#define usersig      //The user signature area of ATxmega devices.


*/

struct avrdude_params {
    char devices[255][255];
    char programmers[40][30];
};

static std::string AvrDudeCmds[2] = { " -p ? 2>&1 | tee test.txt", "avrdude -c ? 2>&1 | tee test.txt"  };

class AvrDude {

    public:
        std::string avrdude={"/usr/bin/avrdude"};
        std::vector<uint8_t> HexFile;
        std::vector<uint8_t> Fuses[3];

        explicit AvrDude();
        AvrDude(const AvrDude &) = delete ; // no copy constructor allowed
        AvrDude operator=(const AvrDude &) = delete; // no assignment
        ~AvrDude();
        void SendAvrDudeCommand(std::string, std::vector<std::string> *);
        void AvrDudeExecuteCmd(std::vector<std::string> *data, std::string cmd);
        void AvrDudeInfo(std::vector<std::string> *data);

        int readDevices(std::vector<std::string> *data, unsigned char no);
        void readFlashToFile(std::vector<std::string> *data,std::string prgmer, std::string device);
        void writeFlashToMCU();
        void ChangeExecutePath(std::string newPath);


    private:


};



#endif // AVRDUDEINTERFACE_H
