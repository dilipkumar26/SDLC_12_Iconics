/** 
 *
* @file operations.h
* Resistance Calculator application with dfferent circuit operations
*
*/
#ifndef __avg_rms_H__
#define __avg_rms_H__

#include <stdio.h>
#include <stdlib.h>

float avg_voltage(float Vpeak);
float avg_current(float Ipeak);
float rms_voltage(float Vpeak);
float rms_current(float Ipeak);

#endif  