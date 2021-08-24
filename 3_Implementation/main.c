#include<stdio.h>
#include<stdlib.h>
#include"virtual_lab.h"

int main()
{
	char choice;
	printf("\n--------------Welcome to the ELETRONICS LAB------------");
	printf("\n---Menu---\n");
	printf("\nList of operations\n1)Electrical Parameters\n 2)Base conversions\n 3)EXIT");
	printf("\nEnter your choice:");
	scanf("%c",&choice);
	switch(choice)
	{
		case '1': 
		second: printf("\nAvailable Operations\n");
   		 printf("\n"
            "1. Resistance calculation\n"
            "2. RMS Value of Voltage or Current\n"
            "3. Average Value of Voltage or Current\n"
            "4. DC Value of Voltage or Current\n"
			"5. Loop currents calculation using KVL \n"
			"6. Resonant frequency calculation of LC tank circuit\n"
			"7.Energy stored in Capacitor and Time constant of given circuit\n"
			"8. Exit");

			char choice_1;
			printf("\nEnter your choice:");
			scanf("%c",&choice_1);

			switch(choice_1)
			{
		
				case '1':
				resistance_calculation();
				break;
				case '2':
				rms_calculation();
				break;
				case '3':
				average_calculation();
				break;
				case '4':
				dc_calculation();
				break;
				case '5':
				Loop_Kvl_Calculation();
				break;
				case '6':
				res_fq_calculation();
				break;
				case '7':
				EnergyandTimeconstant();
				break;
				case '8':
				 exit(0); 
			
			default: printf("INVALID CHOICE!!!!!!\nPlease renter your choice");
				goto second;
	
			}
		 break;


		case '2':
				third: printf("\nAvailable Operations\n");
   		 printf("\n1. Binary <-> Gray conversion \n"
            "2. Decimal <-->  Hexadecimal conversion\n"
            "3. Decimal <--> Binary conversion\n"
            "4. Decimal <--> Octal conversion\n"
			"5. Exit");

			char choice_2;
			printf("\nEnter your choice:");
			scanf("%c",&choice_2);

			switch(choice_2)
			{
				case '1':
				binary_gray_conversion();
				break;
				case '2':
				decimal_hexadecimal_conversion();
				break;
				case '3':
				decimal_binary_conversion();
				break;
				case '4':
				decimal_octal_conversion();
				break;		
				case '5': exit(0); 
			
				default: printf("INVALID CHOICE!!!!!!\nPlease renter your choice");
				goto third;
            
	        }
	break;

	case '3':
	printf("\nThank you. Exiting the Application\n");
	exit(0);

	default:printf("INVALID CHOICE!!!!!!\nPlease renter your choice");
	

    }

	return 0;
}
