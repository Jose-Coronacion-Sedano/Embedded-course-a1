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
void print_statistics(unsigned char* ptr, unsigned char count);
void print_array(unsigned char * ptr, unsigned char count);
unsigned char find_median(unsigned char * ptr, unsigned char count);
unsigned char find_mean(unsigned char * ptr, unsigned char count);
unsigned char find_maximum(unsigned char * ptr, unsigned char count);
unsigned char find_minimum(unsigned char * ptr, unsigned char count);
void sort_array(unsigned char * ptr, unsigned char count); 

void main() {
  
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
  
  print_array(test,SIZE);
  
  print_statistics(test,SIZE);
	
  sort_array(test,SIZE);
	
  print_array(test,SIZE);
  
  
}

void print_statistics(unsigned char* ptr, unsigned char count){
        unsigned char a;
	unsigned char b;
	unsigned char c;
	unsigned char d;
	c=find_mean(ptr,count); 
 	a=find_maximum(ptr,count);
  	b=find_minimum(ptr,count);
    	d=find_median(ptr,count);
	printf("\nThe statics are: \nMean: %u \nMedian: %u \nMaximun: %u\nMinimum: %u\n",c,d,a,b);
			
}
void print_array(unsigned char * ptr, unsigned char count){
       unsigned char i;
       printf("\n{");	
       for(i=0;i<count;i++){
		if(i<(count-1)){			
			printf("%u,", *ptr);}
		else{printf("%u", *ptr);}
			ptr++;
				}
		printf("}\n");

}
unsigned char find_median(unsigned char * ptr, unsigned char count) {
	unsigned char median;
	unsigned char maxtemp;
	unsigned char i;
	unsigned char j;
	unsigned char *tempptr;
	unsigned char testa[count];
	unsigned char test1[count];
	unsigned char *test11=&test1[0];
	unsigned char *ptr1=&testa[0];
	/* the values of the arrangement are copied so as not to affect the original 
	 *arrangement.*/	
	for(i=0; i<count;i++){
	*ptr1=*ptr;
	ptr1++;
	ptr++;	
	}
	ptr1-=count;// the pointer of the array is returned to the 0 value of the array
	ptr-=count;// the pointer of the array is returned to the 0 value of the array
	for(i=0; i<count;i++){
		maxtemp=0;
		/*the maximum value among the elements of the copied arrangement is evaluated*/
		for(j=0;j<count;j++){
			if(*ptr1>maxtemp){
				maxtemp=*ptr1;//the maximum value is stored
				tempptr=ptr1;//the maximum value pointer is stored
				
				}
			ptr1++;
			}

		*test11=maxtemp;//the maximum value pointer is stored
			
		*tempptr=0;//the maximum value is removed to find the next one.
		ptr1-=count;// the pointer is returned to the 0 value of the array
		test11++;
			}
		test11-=count;// the pointer is returned to the 0 value of the array
	/* whether the number of terms of the arrangement is even or odd is evaluated 
	*  in order to  calculate the average value*/
	if ((count%2)==1){
		printf(" \n %u \n",*(test11+(count/2)));
		median=*(test11+(count/2));			
		}
	else{
		
		median=(*(test11+(count/2))+*(test11+(count/2)-1))/2;		
		}
	return median;

}
unsigned char find_mean(unsigned char * ptr, unsigned char count){
	unsigned short summation=0;
	unsigned char i;
		if (ptr==NULL){
			return 0;
			}
		if (count<=0){
			printf("\nThe value of the array size is not valid!\n");
			return 0;		
			}
		for(i=0;i<count;i++){
			summation+=(unsigned short)*ptr;
			ptr++;	
		}
		return ((unsigned char)(summation/count));
}
unsigned char find_maximum(unsigned char * ptr, unsigned char count){
	unsigned char max;
	unsigned char i;
		if (ptr==NULL){
			return 0;
			}
		if (count<=0){
			printf("\nThe value of the array size is not valid!\n");
			return 0;		
			}
		max=*ptr;
		for(i=0;i<count;i++){
			if(*ptr>max){
				max=*ptr;}
			ptr++;
		}
		return max;

}
unsigned char find_minimum(unsigned char * ptr, unsigned char count){
	unsigned char min;
	unsigned char i;
		if (ptr==NULL){
			return 0;
			}
		if (count<=0){
			printf("\nThe value of the array size is not valid!\n");
			return 0;		
			}
		min=*ptr;
		for(i=0;i<count;i++){
			if(*ptr<min){
				min=*ptr;}
			ptr++;
		}
		return min;
}
void sort_array(unsigned char * ptr, unsigned char count){
	unsigned char maxtemp;
	unsigned char i;
	unsigned char j;
	unsigned char *tempptr;
	unsigned char testa[count];
	unsigned char test1[count];
	unsigned char *test11=&test1[0];
	unsigned char *ptr1=&testa[0];
	/* the values of the arrangement are copied so as not to affect the original 
	 *arrangement.*/
	for(i=0; i<count;i++){
	*ptr1=*ptr;
	ptr1++;
	ptr++;	
	}
	ptr1-=count;// the pointer is returned to the 0 value of the array
	ptr-=count;// the pointer is returned to the 0 value of the array
	for(i=0; i<count;i++){
		maxtemp=0;
		/*the maximum value among the elements of the copied arrangement is evaluated*/
		for(j=0;j<count;j++){
			if(*ptr1>maxtemp){
				maxtemp=*ptr1;//the maximum value is stored
				tempptr=ptr1;//the maximum value pointer is stored
				
				}
			ptr1++;
			}
		*test11=maxtemp;//the maximum value pointer is stored
			
		*tempptr=0;//the maximum value is removed to find the next one.
		ptr1-=count;// the pointer is returned to the 0 value of the array
		test11++;
			}
		test11-=count;// the pointer is returned to the 0 value of the array
			
	/*The values of the ordered array are copied to the original array*/ 
	for(i=0; i<count;i++){
	*ptr=*test11;
	test11++;
	ptr++;	
	}
	
	
	
}

