/**
 * @file binAndGray.h
 * @author Nikhil Jose (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-08-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __BINARYANDGRAY_H__
#define __BINARYANDGRAY_H__

/*Header files required*/


/**
 * @brief skeleton code of function to take Binary user input
 * 
 * @return int returns the Binary number entered by the user
 */
int userInputs();

/**
 * @brief skeleton code of function to calculate power
 * 
 * @param base base value
 * @param poweer exponent value
 * @return long long int 
 */
long long int power(int base, int poweer);

/**
 * @brief skeleton code of function to convert 8 bit binary code to 8 bit gray code
 * 
 * @param Binary8Bit 8 bit binary code to be converted to gray code
 * @return int converted 8 bit gray code
 */
int eightBitBinaryTo8BitGray(int Binary8Bit);

/**
 * @brief skeleton code of function to convert 8 bit binary code 
 * to 4 bit gray code
 * 
 * @param Binary8Bit 8 bit binary code to be converted to gray code
 * @return int int converted 4 bit gray code
 */
int eightBitBinaryTo4BitGray(int Binary8Bit);

/**
 * @brief skeleton code of function to verify if the user has entered 8 bit number
 * 
 * @param bitsToVerify 8 bit user input which is to be verified
 */
void verifyBinaryUserInput(int bitsToVerify);

/**
 * @brief function to calculate exor operation
 * 
 * @param bit1 first bit 
 * @param bit2 second bit
 * @return int exor output
 */
int exor(int bit1,int bit2);

/**
 * @brief function to convert 8 bit Gray code to 8 bit Binary code
 * 
 * @param Gray Gray code from user 
 * @return int 8 bit binary output
 */
int eightBitGrayTo8BitBinary(int Gray);

/**
 * @brief function to convert 8 bit Gray code to 4 bit Binary code
 * 
 * @param Gray Gray code from user 
 * @return int 8 bit binary output
 */
int eightBitGrayTo4BitBinary(int Gray);

#endif