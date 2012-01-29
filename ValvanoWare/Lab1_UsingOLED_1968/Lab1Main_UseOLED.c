// Lab1Main_UseOLED.c
// Runs on LM3S1968
// Maykei Nguyen
// Kyle O'Brien
// January 24, 2011

#include <stdio.h>
#include <string.h>
#include "Output.h"
#include "fixed.h"

// const will place these structures in ROM
const struct outTestCase{ // used to test routines
	unsigned long InNumber; // test input number
	char OutBuffer[10]; // Output String
};
typedef const struct outTestCase outTestCaseType;
outTestCaseType outTests3[13]={
{ 0, "  0.00" }, // 0/256 = 0.00
{ 4, "  0.02" }, // 4/256 = 0.01
{ 10, "  0.04" }, // 10/256 = 0.03
{ 200, "  0.78" }, // 200/256 = 0.78
{ 254, "  0.99" }, // 254/256 = 0.99
{ 505, "  1.97" }, // 505/256 = 1.97
{ 1070, "  4.18" }, // 1070/256 = 4.17
{ 26000, "101.56" }, // 26000/256 = 101.56
{ 32767, "128.00" }, // 32767/256 = 127.99
{ 32768, "128.00" }, // 32768/256 = 128
{ 34567, "135.03" }, // 34567/256 = 135.02
{255998, "999.99" }, // 255998/256 = 999.99
{1000000, "***.**" } // error
};
unsigned int Errors,AnError;
char Buffer[10];


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
  unsigned int i;
  Errors = 0;
  for(i=0; i<13; i++){
  	Fixed_uBinOutS(outTests3[i].InNumber,Buffer);
	if(strcmp(Buffer, outTests3[i].OutBuffer)){
		Errors++;
		AnError = i;
  	}
  }
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
  Delay(16000000);           // delay ~4 sec at 12 MHz
 
  Output_Clear();
  while(1){};
}
