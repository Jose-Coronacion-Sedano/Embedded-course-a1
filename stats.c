/******************************************************************************
 *Copyright (C) 2020 JOSE CORONACION - Universidad Nacional de Ingenieria
 *JOSE CORONACION  and the Univerdidad Nacional de Ingenieria are not liable for
 *any misuse of this material. 
 *****************************************************************************/

/**
 * @file <stats.c> 
 * @brief <Analyzes an array, report statics, and sort elements >
 *
 * < This program analyzes an array of unsigned char data items and report analytics on the  
 * maximum, minimum, mean, and median of the data set also reorder this data set from large
 * to small. All statistics are rounded down to the nearest integer. >
 *
 * @author <Jose Luis Coronacion Sedano>
 * @date <17/06/2020 >
 *
 */




#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
void print_statistics(unsigned char array);
void print_array(unsigned char array);
unsigned char find_median(unsigned char * ptr, unsigned int count);
unsigned char find_mean(unsigned char * ptr, unsigned int count);
unsigned char find_maximum(unsigned char * ptr, unsigned int count);
unsigned char find_minimum(unsigned char * ptr, unsigned int count);
unsigned char sort_array(unsigned char * ptr, unsigned int count);
void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  

}

