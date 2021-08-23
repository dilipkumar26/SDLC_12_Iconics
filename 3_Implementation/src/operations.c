#include "operations.h"
#include<math.h>
/**
 * @brief calculating the series resistance for three resistance
 * 
 * @param r1 
 * @param r2 
 * @param r3 
 * @return float 
 */
float total_ser(float r1, float r2,float r3)
{ 
    float b;
    b=r1+r2+r3;
    return b;
}
/**
 * @brief calculating parallel resistance
 * 
 * @param r1 
 * @param r2 
 * @param r3 
 * @return float 
 */
float total_par(float r1, float r2,float r3)
{
    float c;
    c=((r1*r2*r3)/(r3*r2+r1*r3+r2*r1));
    return c;
}
/**
 * @brief calculating resistance value
 * 
 * @param v 
 * @param i 
 * @return float 
 */
float  cal_res (float v, float i)
{
    return(v/i);
}
/**
 * @brief kilo ohms to ohms
 * 
 * @param r 
 * @return double 
 */
double unit_conv1(double r )
{
   return r*pow(10,3);
}
/**
 * @brief ohms to kilo ohms
 * 
 * @param r 
 * @return double 
 */
double unit_conv2(double r )
{
    return r*pow(10,-3);
}
/**
 * @brief mega ohms to ohms
 * 
 * @param r 
 * @return double 
 */
double unit_conv3(double r )
{
    return r*pow(10,6);
}
/**
 * @brief ohm to mega ohms
 * 
 * @param r 
 * @return double 
 */
double unit_conv4(double r )
{
    return r*pow(10,-6);
}
int res_val(int a,int b,int c,int d)
    {
        int z;
        z=((a*100)+(b*10)+(c))*pow(10,d);
        return z;
    }