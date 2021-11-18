// misc.cpp
//
// tiny functions - used everywhere

#include <cstdio>


char* human_readable(double size/*in bytes*/, char *buf) {
    int i = 0;
    const char* units[] = {"B", "kB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB"};
    while (size > 1024) {
        size /= 1024;
        i++;
    }
    sprintf(buf, "%.*f %s", i, size, units[i]);
    return buf;
}

void intToHex(int intnumber, char *txt)
{
    unsigned char _s4='0';
    char i=4;
    //intnumber=0xffff;

    do {
        i--;
        _s4 = static_cast<unsigned char>(  ((intnumber >> i*4 ) & 0x000f));
        if(_s4<10)
            _s4=_s4+48;
        else
            _s4=_s4+55;

        *txt++= static_cast<char>(_s4);
    } while(i);
}

void ByeToHex(unsigned char bytenumber, char *txt)
{
    unsigned char _s4='0';
    char i=2;

    do {
        i--;
        _s4 = static_cast<unsigned char>( ((bytenumber >> i*2 ) & 0x0f) );
        if(_s4<10)
            _s4=_s4+48;
        else
            _s4=_s4+55;

        *txt++= static_cast<char>(_s4);
    } while(i);
}

void parseBuffer(char* buf, unsigned int size, char* retbuf) {
    int cnt=0;

    for(unsigned int i=0; i<size; i++)
    {
        if (buf[i]=='=') {
            retbuf[cnt]=0;
            retbuf[cnt+1]=0;
            break;
        }
        if (buf[i]!=' ') retbuf[cnt++]=buf[i];
    }
}
