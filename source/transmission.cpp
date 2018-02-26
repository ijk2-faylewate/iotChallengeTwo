#include "sendReceive.h"

//test
void sendChar(){
    //uBit.serial.sendChar(testArr[1], ASYNC);
    uBit.serial.sendChar(forTransmission, ASYNC);
}

void recieveChar(){
  char read = uBit.serial.read(ASYNC);
  uBit.display.print(read);
  uBit.sleep(500);
  uBit.display.clear();

}
