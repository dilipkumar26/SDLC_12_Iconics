#ifndef  __freq_kvl__h__
#define  __freq_kvl__h__

#include<stdio.h>
#include<math.h>
/**
 * @brief decimal-octal conversion
 * 
 * @param decimalnum 
 * @return int 
 */

int dectooct(int decimalnum);

/**
 * @brief ocatl-decimal
 * 
 * @param octalNumber 
 * @return long long 
 */
long long OctToDec(int octalNumber);



/**
 * @brief  loop current calculation
 * 
 */
float **KVL_2(float r[2][2], float v[2][1]);
void Loop_2_KVL ();
float **KVL_3(float r[3][3], float v[3][1]);
void Loop_3_KVL ();


/**
 * @brief resonant frequency calculation
 * 
 */
double fq_calculator(double L,double C);
void res_fq_calculation();




#endif
