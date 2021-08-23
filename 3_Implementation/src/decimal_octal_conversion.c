#include<stdio.h>
#include<math.h>
#include<stdlib.h>


/**
 * @brief converts decimal to octal number taking decimal number as argument
 * 
 * @param decimalnum 
 * @return int 
 */

int dectooct(int decimalnum)
{   
    int octalnum = 0, temp = 1;

    while (decimalnum != 0)
    {
    	octalnum = octalnum + (decimalnum % 8) * temp;
    	decimalnum = decimalnum / 8;
        temp = temp * 10;
    }

    return octalnum;
}


/**
 * @brief converts octal to decimal value
 * 
 * @param octal-number
 * @return decimal value of given octal number
 */ 
long long OctToDec(int octalNumber)
{
    int decimalNumber = 0, i = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    return decimalNumber;
}


/**
 * @brief This function asks the user the desired conversion and takes input
 * 
 */

void decimal_octal_conversion()
{
    back:printf("Available conversions:\n");
    printf("1.Decimal to octal \n 2.Octal to Decimal \n 3.Exit\n ");
    int choice,num,res;
    long long res1;
    scanf("%d",&choice);
    switch (choice)
    {
        {
				case 1:
                printf("Enter Decimal number\n>>");
                scanf("%d",&num);
                res=dectooct(num);
                printf("%d",res);
                printf("\n\n");
				break;


				case 2:
                printf("Enter an octal number:\n ");
                scanf("%d", &num);
                res1=OctToDec(num);
                printf("%lld",res1);
                break;
				


                case 3:
                exit(0);

                default:printf("INVALID CHOICE!!!!!!\nPlease renter your choice");
                goto back;
    }
   
    }
    
}

