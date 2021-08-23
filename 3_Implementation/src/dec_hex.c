#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


struct convert
{
    char hexa[100];
}b;


int hexadec()
{
    int i,j=0,sum=0,len;
    printf("Enter a hexa: ");
    scanf("%s",&b.hexa);
    len=strlen(b.hexa);
    for(i=len-1;i>=0;i--)
    {
        if(b.hexa[i]>='0' && b.hexa[i]<='9')
        {
            sum+=(b.hexa[i]-48) *pow(16,j);
            j++;
        }
        else if(b.hexa[i]>='A' && b.hexa[i]<='F')
        {
            sum+=(b.hexa[i]-55) *pow(16,j);
            j++;
        }
    }
    printf("Decimal number of %s is %d",b.hexa,sum);
    return 0;
}
int dechexa()
{
    long dec,qu,rem;
    int i,j=0;
    printf("Enter decimal number: ");
    scanf("%ld", &dec);
    qu=dec;
    while(qu != 0)
    {
        rem=qu%16;
        if (rem < 10)
            b.hexa[j++] = 48 + rem;
        else
            b.hexa[j++] = 55 + rem;
        qu = qu / 16;
    }
    for (i = j; i >= 0; i--)
            printf("%c",b.hexa[i]);
    return 0;
}



void decimal_hexadecimal_conversion()
{
    int d;
    printf("Welcome to Base Conversion");
    do
    {
        printf("\nEnter your choice \n1. Dec to Hexa \n2. Hexa to Dec\n3. Exit \n");
        scanf("%d",&d);
        switch(d)
        {
            case 1: dechexa();
            break;
            case 2: hexadec();
            break;
            case 3: exit(0);
            break;
        }
    }while(d!=3);
    
}
