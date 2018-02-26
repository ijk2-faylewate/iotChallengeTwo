#include "sendReceive.h"

MicroBit uBit;
//MicroBitSerial serial(P0_0, P0_1);

int main(){

// Initialise the micro:bit runtime.
uBit.init();
//MicroBitSerial serial(P0_0, P0_1);
uBit.serial.redirect(MICROBIT_PIN_P0, MICROBIT_PIN_P1);



while(1){
  //uBit.serial.redirect(MICROBIT_PIN_P0, MICROBIT_PIN_P1);
  /*uBit.display.scroll("ST");
  uBit.sleep(500);
  uBit.display.clear();*/

  charToSend();

  sendChar();
  /*uBit.display.scroll("O");
  uBit.sleep(500);
  uBit.display.clear(); */

  recieveChar();
  /*uBit.display.scroll("I");
  uBit.sleep(500);
  uBit.display.clear(); */


    uBit.sleep(100);
}

}
