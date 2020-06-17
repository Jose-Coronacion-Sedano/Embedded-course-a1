/******************************************************************************
 *Copyright (C) 2020 JOSE CORONACION - Universidad Nacional de Ingenieria
 *JOSE CORONACION  and the Univerdidad Nacional de Ingenieria are not liable for
 *any misuse of this material. 
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <this is a document by order of the course introduction to embedded systems,  
 * in this file will be placed a description of the functions that will be used in stats.c >
 *
 * 
 * @author <Jose Luis Coronacion Sedano>
 * @date <17/06/2020 >
 */
#ifndef __STATS_H__
#define __STATS_H__

/** 
 *  @funtion <print_statistics>
 *  @brief <prints the statistics of an array including minimum, maximum, mean, and median>
 *  
 *  <This funtion is powered by "find_median","find_mean", "find_maximum" and "find_minimum"
 *  funtions, first executes the functions "find_median","find_mean", "find_maximum" and
 *  "find_minimum", stores the statistics of an array values in temporal variables and finally    
 *  prints them out on the screen using the "printf" function.>
 *
 *  @param <unsigned char * ptr> <The pointer to a data set>
 *  @param <unsigned int count> <The number of items of the array>
 */ 
void print_statistics(unsigned char* ptr, unsigned int count);


/** 
 *  @funtion <print_array>
 *  @brief  <Given an array of data and a length, prints the array to the screen>
 *  
 *  This funtion uses the values of the given array and prints them out on the screen using
 *  the "printf" function.
 *
 *  @param <unsigned char * ptr> <The pointer to a data set>
 *  @param <unsigned int count> <The number of items of the array>
 */ 
void print_array(unsigned char * ptr, unsigned int count);


/** 
 *  @funtion <find_median>
 *  @brief  <Given an array of data and a length, returns the median value>
 *  
 *  <This function uses pointers to reference the internal values of the array, then it creates a 
 *  copy of the array so that it can be manipulated without changing the values of the original
 *  array, after that the function is going to order the array. Once we obtain the ordered data,
 *  we evaluate whether the amount of data is  odd or even and determine the center value, the
 *  center value depends of the parity of the number of elements.>
.*
 *
 *  @param <unsigned char * ptr> <The pointer to a data set>
 *  @param <unsigned int count> <The number of items of the array>
 *  @return <The median value>
 */ 
unsigned char find_median(unsigned char * ptr, unsigned int count);


/** 
 *  @funtion <find_mean>
 *  @brief   <Given an array of data and a length, returns the mean>
 *  
 *  <This function uses pointers to reference the internal values of the array, using the
 *  internal values and the amount of data makes a sum through a for loop, the sum's type 
 *  variable is int because is greater than 256, once obtained the result of the sum is divided
 *  by the amount of data obtaining the mean value.>
 *
 *  @param <unsigned char * ptr> <The pointer to a data set>
 *  @param <unsigned int count> <The number of items of the array>
 *  @return <The mean value>
 */ 
unsigned char find_mean(unsigned char * ptr, unsigned int count);


/** 
 *  @funtion <find_maximun>
 *  @brief   <Given an array of data and a length, returns the maximum value>
 *  
 *  <This function uses pointers to reference the internal values of the array, using the
 *  internal values and the amount of data,through a for loop compares and obtains the 
 *  maximum value.>
 *
 *  @param <unsigned char * ptr> <The pointer to a data set>
 *  @param <unsigned int count> <The number of items of the array>
 *  @return <The maximum value>
 */ 
unsigned char find_maximum(unsigned char * ptr, unsigned int count);

/** 
 *  @funtion <find_maximun>
 *  @brief   <Given an array of data and a length, returns the minimum>
 *  
 *  <This function uses pointers to reference the internal values of the array, using the
 *  internal values and the amount of data,through a for loop compares and obtains the minimun
 *   value.>
 *
 *  @param <unsigned char * ptr> <The pointer to a data set>
 *  @param <unsigned int count> <The number of items of the array>
 *  @return <The minimum value>
 */ 
unsigned char find_minimum(unsigned char * ptr, unsigned int count);

/** 
 *  @funtion <sort_array>
 *  @brief   <Given an array of data and a length, sorts the array from largest to smallest.>
 *  
 *  <This function uses pointers to reference the internal values of the array, then it creates
 *  a copy of the array so that it can be manipulated without changing the values of the 
 *  original array, finally by means of a for loop it stores the highest value of the array, 
 *  stores it in another array, and finally it deletes the value of the original array to
 *  look for the next highest value and funcion do it for all elments. Once we obtain the 
 *  ordered data copy these values to the original array.>
 *
 *  @param <unsigned char * ptr> <The pointer to a data set>
 *  @param <unsigned int count> <The number of items of the array>
 */ 
void sort_array(unsigned char * ptr, unsigned int count); 


#endif /* __STATS_H__ */
