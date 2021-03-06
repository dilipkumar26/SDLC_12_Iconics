#include <stdio.h>
#include<stdlib.h>


float **KVL_2(float r[2][2], float v[2][1])
{
    float **i=(float **)malloc(sizeof(float *)*2);
    int k,j,l;
    for(k=0;k<2;k++)//checking purpose
    {
        i[k]=(float *)malloc(sizeof(float)*1);
        for(j=0;j<1;j++)
        {
            i[k][j]=0;
        }
    }
    double del,delta;
    del = (r[0][0]*r[1][1]) - (r[0][1]*r[1][0]);
    delta=1/del;
   float n;
   n= r[0][0];
   r[0][0]=r[1][1];
   r[1][1]=n;
   r[0][1]=-r[0][1];
   r[1][0]=-r[1][0];
   for(j=0;j<2;j++){
       for(k=0;k<2;k++){
           r[j][k]*=delta;
       }
   }
    for(j=0;j<2;j++)                                    
    {    
        for(k=0;k<1;k++)    
        {    
            i[j][k]=0;    
            for(l=0;l<1;l++)    
            {    
                i[j][k]+=r[j][l]*v[l][k];    
            }    
        }    
    }    
    return i;
}


void Loop_2_KVL (){
    float a[2][2];
    float v[2][1];
    printf("Enter the sum of all the resistors present in the loop1:\n");
    scanf("%f", &a[0][0]);
    printf("Enter the sum of the resistors present between loop1 and loop2:\n");
    scanf("%f", &a[0][1]);
    a[0][1]=-a[0][1];
    a[1][0]=a[0][1];
    printf("Enter the sum of all the resistors present in the loop2:\n");
    scanf("%f", &a[1][1]);
    printf("Enter the voltage source present in loop 1:\n");
    scanf("%f", &v[0][0]);
    v[1][0]=0;
    float **i;
    i = KVL_2(a,v);
    printf("The loop currents are:\n");
    printf("loop1:%f Amps\n", i[0][0]);
    printf("loop2: %f Amps\n", i[1][0]);
}

float **KVL_3(float r[3][3], float v[3][1])
{
    float **i=(float **)malloc(sizeof(float *)*3);
    int k,j,l,determinant;
    for(k=0;k<3;k++)//checking purpose
    {
        i[k]=(float *)malloc(sizeof(float)*1);
        for(j=0;j<1;j++)
        {
            i[k][j]=0;
        }
    }
    float inverse_r[3][3];
    for(j = 0; j< 3; j++)
    determinant = determinant + (r[0][j] * (r[1][(j+1)%3] * r[2][(j+2)%3] - r[1][(j+2)%3] * r[2][(j+1)%3]));
    for(j = 0; j < 3; j++){
    for(k = 0; k < 3; k++){
    inverse_r[j][k]=((r[(k+1)%3][(j+1)%3] * r[(k+2)%3][(j+2)%3]) - (r[(k+1)%3][(j+2)%3] * r[(k+2)%3][(j+1)%3]))/ determinant;
    }
    }
    for(j = 0; j < 3; j++){
    for(k = 0; k < 3; k++){
        printf("%f ", inverse_r[j][k]);
    }
    printf("\n");
    }
    for(j=0;j<3;j++)                                    
    {    
        for(k=0;k<1;k++)    
        {    
            i[j][k]=0;    
            for(l=0;l<1;l++)    
            {    
                i[j][k]+=inverse_r[j][l]*v[l][k];    
            }    
        }    
    }    
    return i;
}




void Loop_3_KVL (){
    float a[3][3];
    float v[3][1];
    printf("Enter the sum of all the resistors present in the loop1:");
    scanf("%f", &a[0][0]);
    printf("Enter the sum of the resistors present between loop1 and loop2:");
    scanf("%f", &a[0][1]);
    a[0][1]=-a[0][1];
    a[1][0]=a[0][1];
     printf("Enter the sum of all the resistors present in the loop2:");
    scanf("%f", &a[1][1]);
    printf("Enter the sum of all the resistors present between loop2 and loop3:");
    scanf("%f", &a[1][2]);
    a[1][2]=-a[1][2];
    a[2][1]=a[1][2];
     printf("Enter the sum of all the resistors present in the loop3:");
    scanf("%f", &a[2][2]);
    printf("Enter the sum of all the resistors present between loop1 and loop3:");
    scanf("%f", &a[0][2]);
    a[0][2]=-a[0][2];
    a[2][0]=a[0][2];
    printf("Enter the voltage source present in loop 1:");
    scanf("%f", &v[0][0]);
    v[1][0]=0;
    v[2][0]=0;
    int j,k;
    for(j = 0; j < 3; j++){
    for(k = 0; k < 3; k++){
        printf("%f ", a[j][k]);
    }
    printf("\n");
    }
    float **i;
    i = KVL_3(a,v);
    printf("The loop currents are:\n");
    printf("loop1: %f Amps\n", i[0][0]);
    printf("loop2: %f Amps\n", i[1][0]);
    printf("loop3: %f Amps\n", i[2][0]);
}




void Loop_Kvl_Calculation(){
    int choice;
    first:printf("Available choices\n"
    "1. Loop current calculation for 2 loop circuit\n"
    "2. Loop current calculation for 3 loop circuit\n");
    
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
             Loop_2_KVL();
             break;

             case 2:
             Loop_3_KVL();
             break;

              case 3:
             exit(0);
            
            default:
            printf("INVALID CHOICE!!!!!!\nPlease renter your choice");
	        goto first;




        }
        
    
}
