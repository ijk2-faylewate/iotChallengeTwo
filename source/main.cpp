#include "sendReceive.h"

MicroBit uBit;

int main(){

// Initialise the micro:bit runtime.
uBit.init();

while(1){

    charToSend();
    uBit.sleep(100);
}

}
