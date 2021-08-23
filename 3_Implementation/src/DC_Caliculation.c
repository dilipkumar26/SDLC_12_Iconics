#include<stdio.h>
#include<stdlib.h>

float power_cal(float v,float i)
{
    float p;
    p=v*i;
    return p;
}


float vtg(float p,float i)
{
    float v;
    v=p/i;
    return v;
}


float current(float p,float v)
{
    float c;
    c=p/v;
    return c;
}

void dc_calculation()
{
    printf("Enter your choice: \n 1.Power \n 2.Voltage \n 3. Current \n");
    float P,V,I;
    int i ;
    scanf("%d",&i);
    switch (i)
    {
    case 1: 
         printf("Enter the Voltage & Current\n");
         scanf("%f %f", &V,&I);
         P=power_cal(V,I);
         printf("Power = %f\n",P);
         break;
     case 2:
           printf("Enter the Power & Current\n");
           scanf("%f %f",&P,&I);
           V=vtg(P,I);
           printf("Voltage = %f\n",V);
            break;
     case 3:
            printf("Enter the Power & Voltage\n");
            scanf("%f %f",&P,&V);
            I=current(P,V);
            printf("Current = %f\n",I);
             break;

    default:
    printf("Invalid input\n");
    }    
}

