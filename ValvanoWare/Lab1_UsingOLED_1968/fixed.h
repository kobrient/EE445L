//fixed.h
//This file contains all the function declarations
//as well as variables visibile to users
//Maykei Nguyen
//Kyle O'Brien
//January 24, 2011

//------------Fixed_uDecOut2------------
// Initializes the output function to display a fixed point
// value with two decimal points
// Input: 32-bit unsigned integer
// Output: 32-bit decimal fixed-point with resolution of 0.01
void Fixed_uDecOut2(unsigned int input);

//------------Fixed_uDecOut3------------
// Initializes the output function to display a fixed point
// value with three decimal points
// Input: 32-bit signed integer
// Output: 16-bit signed decimal fixed-point with resolution of 0.001
void Fixed_uDecOut3(signed int input);

//------------Fixed_uBinOut------------
// Initializes the output function to display a fixed point
// value with two binary points
// Input: 32-bit unsigned integer
// Output: 32-bit binary fixed-point with resolution of 1/256
void Fixed_uBinOut(unsigned int input);

//------------Fixed_uBinOutSprint------------
// Test Function Representing Fixed_uBinOut using char arrays to automatically
// check test cases.
void Fixed_uBinOutS(unsigned int input, char* buffer );