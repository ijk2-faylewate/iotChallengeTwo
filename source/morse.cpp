#include "sendReceive.h"

char testArr[3] = {'T','E','A'};
char forTransmission;
//test
void morseDec(){
  if (toSend[0] == 0){
    forTransmission = testArr[0];
    /*uBit.display.print('A');
    uBit.sleep(500);
    uBit.display.clear(); */
  }
  else if (toSend[0] == 1){
    forTransmission = testArr[1];
    /*uBit.display.print('B');
    uBit.sleep(500);
    uBit.display.clear(); */
  }
  else{
    uBit.display.scroll('ERROR');
    uBit.sleep(500);
    uBit.display.clear();
  }
}
