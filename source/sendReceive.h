#ifndef S_R
#define S_R

#include "MicroBit.h"
extern MicroBit uBit;

//Dash, dot, dead air
#define HI 1
#define LOW 0
#define NOISE -1
//Boolean values
#define TRUE 1
#define FALSE 0
//values for arrays and asscociated loops
#define SEND_ON 3
#define MESSAGE 4

//extern int [];

//Test
void charToSend();

//Non-test
void buttonAClick(MicroBitEvent);
void buttonAHold(MicroBitEvent);
void buttonBClick(MicroBitEvent);

//probably just test
int getValue();

#endif
