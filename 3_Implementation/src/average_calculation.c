#include<stdio.h>
#include<stdlib.h>


float avg_voltage(float Vpeak)
{
    float Vavg;
    Vavg=Vpeak*0.637;
    return Vavg;
}


float avg_current(float Ipeak)
{
    float Iavg;
    Iavg=Ipeak*0.637;
    return Iavg;
}


void average_calculation(){
    printf("Enter your choice: \n 1.Voltage \n 2. Current \n");
    float Vpeak,Vavg,Ipeak,Iavg;
    int i ;
    scanf("%d",&i);
    switch (i)
    {
    case 1: 
        printf("Enter the Voltage\n");
        scanf("%f",&Vpeak);
        Vavg=avg_voltage(Vpeak);
        printf("Average voltage = %f \n", Vavg);
        break;
    case 2:
        printf("Enter the current\n");
        scanf("%f",&Ipeak);
        Iavg=avg_current(Ipeak);
        printf("Average current = %f \n",Iavg);
        break;
    default:
        break;      
    }

}

