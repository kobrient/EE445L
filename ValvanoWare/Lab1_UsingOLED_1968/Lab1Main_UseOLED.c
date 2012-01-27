// TestMain.c
// Runs on LM3S1968


#include <stdio.h>
#include "Output.h"
#include "fixed.h"

// delay function for testing from sysctl.c
// which delays 3*ulCount cycles
__asm void
Delay(unsigned long ulCount)
{
    subs    r0, #1
    bne     Delay
    bx      lr
}
int main(void){

  //Array checking. Using strcmp
  /////////
  /////////





  ////////////
  ////////////
  Output_Init();
  Output_Color(15);
  printf("Hello, world.");
  printf("%c", NEWLINE);
  Delay(4000000);           // delay ~1 sec at 12 MHz

  Fixed_uDecOut2(4567);
  printf("%c", NEWLINE);
  Delay(4000000);           // delay ~1 sec at 12 MHz

  Fixed_uDecOut3(4567);
  printf("%c", NEWLINE);
  Delay(4000000);           // delay ~1 sec at 12 MHz

  Fixed_uBinOut(64);
  printf("%c", NEWLINE);
  Delay(4000000);           // delay ~1 sec at 12 MHz

  Fixed_uBinOut(512);
  Delay(16000000);           // delay ~1 sec at 12 MHz
 
  Output_Clear();
  while(1){};
}
