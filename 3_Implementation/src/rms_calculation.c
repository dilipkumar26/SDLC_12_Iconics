#include<stdio.h>
#include<stdlib.h>


float rms_voltage(float Vpeak)
{
    float Vrms;
    Vrms=Vpeak*0.707;
    return Vrms;
}


float rms_current(float Ipeak)
{
    float Irms;
    Irms=Ipeak*0.637;
    return Irms;
}


void rms_calculation(){
    printf("Enter your choice: \n 1.Voltage \n 2. Current \n");
    float vin,vrms,Iin,Irms;
    int i ;
    scanf("%d",&i);
    switch (i)
    {
    case 1:
        printf("Enter the Voltage");
        scanf("%f",&vin);
        vrms=rms_voltage(vin);
        printf("RMS voltage = %f ", vrms);
        break;
    case 2:
        printf("Enter the current");
        scanf("%f",&Iin);
        Irms=rms_current(Iin);
        printf("RMS current= %f",Irms);
        break;
    default:
        break;      
    }

}







