#include "sendReceive.h"

//test
void morseDec(){
  if (toSend[0] == 0){
    uBit.display.print('A');
    uBit.sleep(500);
    uBit.display.clear();
  }
  else if (toSend[0] == 1){
    uBit.display.print('B');
    uBit.sleep(500);
    uBit.display.clear();
  }
  else{
    uBit.display.scroll('ERROR');
    uBit.sleep(500);
    uBit.display.clear();
  }
}
