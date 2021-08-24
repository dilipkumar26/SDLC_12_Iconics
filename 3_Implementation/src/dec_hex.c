#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


/**
 * @brief Function to compute for the 2 functions 
 * 
 */
struct convert
{
    char hexa[100];
}b;

/**
 * @brief Function to compute Decimal to Hexadecimal
 * 
 * @return int returns the decimal value
 */

int hexadec()
{
    int i,j=0,sum=0,len;
    printf("Enter a hexa: "); // user must give the hexadecimal value
    scanf("%s",&b.hexa);
    len=strlen(b.hexa); // checks the length of the input
    for(i=len-1;i>=0;i--) //iterates over the rows
    {
        if(b.hexa[i]>='0' && b.hexa[i]<='9') //input value should be in the range of 0 to 9
        {
            sum+=(b.hexa[i]-48) *pow(16,j); //ASCII value 0 is 48
            j++;
        }
        else if(b.hexa[i]>='A' && b.hexa[i]<='F') // input value should be in the range of 0 to 9
        {
            sum+=(b.hexa[i]-55) *pow(16,j); // ASCII value of A is 55
            j++;
        }
    }
    // output = b.hexa;
    printf("Decimal number of %s is %d",b.hexa,sum); // prints the output for the user input (Decimal value)
    return sum; 
}

/**
 * @brief Function to compute Decimal to Hexadecimal
 * 
 * @return int retuns the Hexadecimal value
 */
char* dechexa()
{
    long dec,qu,rem,out;
    int i,j=0;
    printf("Enter decimal number: "); // user must give the decimal value
    scanf("%ld", &dec);
    qu=dec;
    while(qu != 0)
    {
        rem=qu%16; // remainder will stores the value of quotient divided by 16
        if (rem < 10)
            b.hexa[j++] = 48 + rem; // If remainder value is less than 10 it should be added by 48
        else
            b.hexa[j++] = 55 + rem; // If remainder value is greater than 10 it should be added by 55
        qu = qu / 16;
    }
    for (i=j;i>=0;i--) 
        printf("%c",b.hexa[i]); // prints the output for the user input (Hexadecimla value) 
    return b.hexa;
}

/**
 * @brief To call the main function
 * 
 */

void decimal_hexadecimal_conversion()
{
    int d;
    printf("Welcome to Base Conversion"); // after compiling gets as the main heading
    do
    {
        printf("\nEnter your choice \n1. Dec to Hexa \n2. Hexa to Dec\n3. Exit \n"); // it asks for the users choice
        scanf("%d",&d);
        // code to be executed if the user choose anyone of the below
        switch(d) 
        {
            case 1: dechexa();
            break;
            case 2: hexadec();
            break;
            case 3: exit(0);
            break;
        }
    }while(d!=3); // output should be given if exit option not clicks
}
