#ifndef MISC_H
#define MISC_H

char* human_readable(double size/*in bytes*/, char *buf);
void ByeToHex(unsigned char bytenumber, char *txt);
void IntToHex(int intnumber, char *txt);
void parseBuffer(char* buf, unsigned int size, char* retbuf);


#endif // MISC_H
