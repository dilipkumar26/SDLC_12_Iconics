#include <stdio.h>
#include "EnergyandTimeconstant.h"
void EnergyandTimeconstant()
{
	double Capacitance=0.0,Voltage=0.0,Seriesresistance=0.0;
	int choice;
	printf("Enter the capacitance in microFarads");
	scanf("%lf",&Capacitance);
	printf("Enter the applied voltage");
	scanf("%lf",&Voltage);
	printf("Enter the Series Resistence");
	scanf("%lf",&Seriesresistance);
	printf("1. Energy Stored in the Capacitor\n");
	printf("2. Time constant\n");
	printf("Enter your choice as 1 or 2\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: 
			printf("Energy Stored in the capacitor is:  %lf\n",EnergyStored(Capacitance,Voltage));
			break;
		case 2: 
			printf("Time constant of the circuit is:  %lf\n",TimeConstant(Seriesresistance,Capacitance));
			break;
		default:
			printf("Invalid choice");
	}
}


double EnergyStored(double Capacitance, double Voltage )
{
	double EnergyStored=0.0;
	EnergyStored = Capacitance * Voltage * Voltage/2;
	return EnergyStored;
}
double TimeConstant(double Seriesresistance,double Capacitance)
{
	double TimeConstant=0.0, CapacitanceinFarads=0.0;
	CapacitanceinFarads = Capacitance/1000000;
	TimeConstant = Seriesresistance * CapacitanceinFarads;
	return TimeConstant;
}


