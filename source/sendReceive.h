#ifndef S_R
#define S_R

#include "MicroBit.h"

extern MicroBit uBit;
MicroBitSerial serial();


//Dash, dot, dead air
#define HI 1
#define LOW 0
#define NOISE -1
//Boolean values
#define TRUE 1
#define FALSE 0
//values for arrays and asscociated loops
#define MESSAGE 4
#define SEND_ON MESSAGE - 1

extern int toSend [MESSAGE];
extern char testArr [3];
extern char forTransmission;


//Test
void charToSend();
void morseDec();
void sendChar();
void recieveChar();

//Non-test
void buttonAClick(MicroBitEvent);
void buttonAHold(MicroBitEvent);
void buttonBClick(MicroBitEvent);



#endif
