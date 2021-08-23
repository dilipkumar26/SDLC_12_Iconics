/**
 * @file binaryandgray.c
 * @author Nikhil Jose (you@domain.com)
 * @brief file to calculate 4 bit and 8 bit binary to gray conversion
 * @version 0.1
 * @date 2021-08-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
//#include"binaryandgray.h"

/**
 * @brief function to take Binary user input
 * 
 * @return int returns the Binary number entered by the user
 */
int userInputs()
{
    int input =0;
    // printf("Enter the 8 bit Code to be converted : ");
    scanf("%d",&input);
    return input;
}


/**
 * @brief function to calculate power
 * 
 * @param base base value
 * @param poweer exponent value
 * @return long long int 
 */
long long int power(int base, int poweer)
{
    long long int r=1;
    for(int index = 0; index<poweer;index++)
    {
        r = r * base;
    }
    return r;
}


/**
 * @brief function to convert 8 bit binary code to 8 bit gray code
 * 
 * @param Binary8Bit 8 bit binary code to be converted to gray code
 * @return int converted 8 bit gray code
 */
int eightBitBinaryTo8BitGray(int Binary8Bit){
    int grayCode=0,lsb=0,adjBit=0,incr=0;
    while (Binary8Bit!=0)
    {
        lsb=Binary8Bit%10;
        Binary8Bit=Binary8Bit/10;
        adjBit = Binary8Bit%10;

        if((lsb&&!adjBit)||(!lsb&&adjBit))
        {
            grayCode = grayCode+power(10,incr);
        }

        incr++;
    }

    return grayCode;
}

/**
 * @brief function to convert 8 bit binary code to 4 bit gray code
 * 
 * @param Binary8Bit 8 bit binary code to be converted to gray code
 * @return int int converted 4 bit gray code
 */
int eightBitBinaryTo4BitGray(int Binary8Bit){
    int grayCode=0,lsb=0,adjBit=0,incr=0;
    
    while (Binary8Bit!=0)
    {
        lsb=Binary8Bit%10;
        Binary8Bit=Binary8Bit/10;
        adjBit = Binary8Bit%10;

        if((lsb&&!adjBit)||(!lsb&&adjBit))
        {
            grayCode = grayCode+power(10,incr);
        }

        incr++;
    }

    return grayCode/10000;
}

/**
 * @brief function to verify if the user has entered 8 bit number
 * 
 * @param bitsToVerify 8 bit user input which is to be verified
 */
void verifyBinaryUserInput(int bitsToVerify)
{

    int inputCopyBV=0,inputCopyBitV=0;
    int count=0,temp=0;

    inputCopyBV=bitsToVerify;
    inputCopyBitV=bitsToVerify;

    /*verifying if the user input is binary*/
    while (inputCopyBV!=0)
    {
        temp = inputCopyBV%10;
        if (temp==0||temp==1)
        {
            inputCopyBV = inputCopyBV/10;
            if(inputCopyBV == 0)
            {
                break;
            }
        }
        else
        {
            printf("Please Enter a Valid Binary Number\n");
            exit(0);
        }
    }
    
    /* Checking if the number is 8 bit*/
    while(inputCopyBitV!=0)
    {
        inputCopyBitV = inputCopyBitV/10;
        count++;
    }

    if(count!=8)
    {
        printf("Please Enter a Valid 8 bit Binary Number\n");
        exit(0);
    }
}


/**
 * @brief function to calculate exor operation
 * 
 * @param bit1 first bit 
 * @param bit2 second bit
 * @return int exor output
 */
int exor(int bit1,int bit2)
{
    if ((bit1==!bit2)||(!bit1==bit2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

/**
 * @brief function to convert 8 bit Gray code to 8 bit Binary code
 * 
 * @param Gray Gray code from user 
 * @return int 8 bit binary output
 */
int eightBitGrayTo8BitBinary(int Gray)
{
    
    int inputArray[10],output=0, binOutput[10];

    /**
     * @brief converting intiger to array for ease access of msb
     * 
     */
    for(int i=0;i<8;i++)
    {
        inputArray[8-i]=Gray%10;
        Gray=Gray/10;
        
    }

    /**
     * @brief coversion from gray code to binary code
     * 
     */
    binOutput[0] = inputArray[1];
    for(int index =1 ;index <=7;index++)
    {
        binOutput[index] = exor(binOutput[index-1],inputArray[index+1]);
    }

    /**
     * @brief conversion from array to integer
     * 
     */
    for(int index =0 ;index<=7 ;index++)
    {
        output = output + (binOutput[index]* power(10,7-index));
    }

    return output;
}

/**
 * @brief function to convert 8 bit Gray code to 4 bit Binary code
 * 
 * @param Gray Gray code from user 
 * @return int 8 bit binary output
 */
int eightBitGrayTo4BitBinary(int Gray)
{
    int inputArray[10],output=0, binOutput[10];

    /**
     * @brief converting intiger to array for ease access of msb
     * 
     */
    for(int i=0;i<8;i++)
    {
        inputArray[8-i]=Gray%10;
        Gray=Gray/10;
        
    }

    /**
     * @brief coversion from gray code to binary code
     * 
     */
    binOutput[0] = inputArray[1];
    for(int index =1 ;index <=7;index++)
    {
        binOutput[index] = exor(binOutput[index-1],inputArray[index+1]);
    }

    /**
     * @brief conversion from array to integer
     * 
     */
    for(int index =0 ;index<=7 ;index++)
    {
        output = output + (binOutput[index]* power(10,7-index));
    }

    return output/10000;
}

void binary_gray_conversion()
{
    int choice_2,userInputBits,output;

     printf("\n\n1. 8 bit Binary code to 8 bit Gray code.\
            \n2. 8 bit Binary code to 4 bit Gray code.\
            \n3. 8 bit Gray code to 8 bit Binary code.\
            \n4. 8 bit Gray code to 4 bit Binary code.\n 5.EXIT \n ");


			printf("\nEnter your choice:");
			scanf("%d",&choice_2);

			switch(choice_2)
			{
				case 1:
                    printf("Enter the 8 bit Binary input: ");
                    userInputBits = userInputs();
                    verifyBinaryUserInput(userInputBits);
                    output = eightBitBinaryTo8BitGray(userInputBits);
                    printf("\nThe 8 bit Grey code of %d is %d\n",userInputBits,output);
                    break;

                case 2:
                    printf("Enter the 8 bit Binary input: ");
                    userInputBits = userInputs();
                    verifyBinaryUserInput(userInputBits);
                    output = eightBitBinaryTo4BitGray(userInputBits);
                    printf("\nThe 4 bit Grey code of %d is %d\n",userInputBits,output);
                    break;

                case 3:
                    printf("Enter the 8 bit Gray input: ");
                    userInputBits = userInputs();
                    verifyBinaryUserInput(userInputBits);
                    output = eightBitGrayTo8BitBinary(userInputBits);
                    printf("\nThe 8 bit Binary code of %d is %d\n",userInputBits,output);
                    break;
                
                case 4:
                    printf("Enter the 8 bit Gray input: ");
                    userInputBits = userInputs();
                    verifyBinaryUserInput(userInputBits);
                    output = eightBitGrayTo4BitBinary(userInputBits);
                    printf("\nThe 4 bit Binary code of %d is %d",userInputBits,output);
                    break;

                case 5: exit(0);
	

	        default:printf("INVALID CHOICE!!!!!!\nPlease renter your choice");
            break;
            }
}