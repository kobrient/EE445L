// Lab 1
// fixed.h
// Runs on LM3S1968 - Used to impliment and test printing of floating point binary and decimal numbers
// Maykei Nguyen
// Kyle O'Brien
// January 24, 2011

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
// Input: 32-bit unsigned integer and character buffer
// Output: Filled char buffer containing the input num as in human-readable string format
void Fixed_uBinOutS(unsigned int input, char* buffer );