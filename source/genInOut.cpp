#include "sendReceive.h"

//Dash, dot, dead air
//#define HI 1
//#define LOW 0
//#define NOISE -1
//Boolean values
//#define TRUE 1
//#define FALSE 0
//values for arrays and asscociated loops
//#define SEND_ON 3
//#define MESSAGE 4

//MicroBitPin P0(MICROBIT_ID_IO_P0, MICROBIT_PIN_P0, PIN_CAPABILITY_DIGITAL);
int sendNow = FALSE;
//Value for character
int sendThis = NOISE;
//Track number of dot or dash input
int inTrack = -1;
//Array to hold char selection
int toSend [MESSAGE] = {NOISE,NOISE,NOISE,NOISE};

//Button for entering dot values
void buttonAClick(MicroBitEvent){
  //uBit.io.P0.setDigitalValue(LOW);
  sendThis = LOW;
  inTrack++;
}
//button for adding dash values
void buttonAHold(MicroBitEvent){
  //uBit.io.P0.setDigitalValue(HI);
  sendThis = HI;
  inTrack++;
}
//button to send messages shorter than three dots or dashes
void buttonBClick(MicroBitEvent){
  sendThis = NOISE;
  sendNow = TRUE;
  inTrack = SEND_ON;
}
//Test initialization
void checkArray(){
  uBit.display.scroll("INIT");
  for (int i = 0; i < MESSAGE; i++){
    uBit.display.scroll(toSend[i]);
    uBit.sleep(500);
    uBit.display.clear();
  }
}
//Test version
void charToSend(){
  //Await input
  uBit.messageBus.listen(MICROBIT_ID_BUTTON_B, MICROBIT_BUTTON_EVT_CLICK, buttonBClick);
  uBit.messageBus.listen(MICROBIT_ID_BUTTON_A, MICROBIT_BUTTON_EVT_CLICK, buttonAClick);
  uBit.messageBus.listen(MICROBIT_ID_BUTTON_A, MICROBIT_BUTTON_EVT_HOLD, buttonAHold);
  //uBit.messageBus.listen(MICROBIT_ID_BUTTON_B, MICROBIT_BUTTON_EVT_CLICK, buttonBClick);
  //If input received, continue
  if (sendThis != NOISE){
      //display for test: INPUT
      uBit.display.print(sendThis);
      uBit.sleep(500);
      uBit.display.clear();
  /*    //display for test: POSITION IN MESSAGE
      uBit.display.print(inTrack);
      uBit.sleep(500);
      uBit.display.clear();
    */  //Make position in message = to selection
      toSend[inTrack] = sendThis;
      //display for test: SELECTION
    /*  uBit.display.print(toSend[inTrack]);
      uBit.sleep(500);
      uBit.display.clear();
    */  //If at end of message,
      //display for test: OUTPUT
      if(inTrack == SEND_ON){
        uBit.display.scroll("OUTP");
        uBit.sleep(500);
        uBit.display.clear();

        for (int i = 0; i < MESSAGE; i++){
          uBit.display.scroll(toSend[i]);
          uBit.sleep(500);
          uBit.display.clear();
        }
        //reset to noise.
        for (int y = 0; y < MESSAGE; y++){
          //uBit.display.print(y);
          //uBit.sleep(100);
          toSend[y] = NOISE;
        }
        //reset position to start
        inTrack = -1;
        sendThis = NOISE;
      //  checkArray();
      }
}

  /*

  if (sendNow == TRUE){
    if (toSend[0] == 0){
      uBit.display.print('a');
      uBit.sleep(500);
      uBit.display.clear();
    }
    else if (toSend[0] == 1){
      uBit.display.print('b');
      uBit.sleep(500);
      uBit.display.clear();
    }
    else{
      uBit.display.scroll('Fuck up');
      uBit.sleep(500);
      uBit.display.clear();
    }
    */
}
