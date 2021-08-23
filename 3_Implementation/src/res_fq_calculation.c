#include <stdio.h> 
#include<math.h> 

double f=0.00, L=0.00,C=0.00; 

double fq_calculator(double L,double C);

void res_fq_calculation()
{
    printf("Enter inductance in milliHenrys\n"); 
    scanf("%lf",&L); 
    printf("Enter capacitance in picoFarads\n"); 
    scanf("%lf",&C);   
    f=fq_calculator(L,C);
    printf("Resonant frequency of Tank circuit = %lf kHz \n",f);  
}

double fq_calculator(double L,double C)
{
    f=1.0/(2*3.142*(sqrt(L*pow(10,-3)*C*pow(10,-12)))); 
    f=f*pow(10,-3);
    return f;
}

