/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <First peer reviewed assignment >
 *
 * <Stats.c of the first peer reviewed assignment>
 *
 * @author <Add Nikhil Nilakantan>
 * @date <09/18/2023>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test [SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  int minimum = 0;
  int maximum = 0;
  float mean = 0;
  float median = 0;
  unsigned char sorted_array [SIZE];

  /* Statistics and Printing Functions Go Here */
  printf("Array before sorting: \n");
  print_array(test);
  median = find_median(test);
  mean = find_mean(test);
  maximum = find_maximum(test);
  minimum = find_minimum(test);
  print_statistics(minimum, maximum, mean, median);
  sort_array(test);
  printf("Array after sorting: \n");
  print_array(test);
}

void sort_array (unsigned char test[]){
	int i=0, j=0;
	int temp = 0;
	for (i=0; i<SIZE; i++) {
		for (j=0; j<SIZE; j++) {
			if (test[i]>test[j])	{
				temp = test[i];
				test[i]= test[j];
				test[j]=temp;
			}
		}
	}
}

void print_statistics (int minimum, int maximum, float mean, float median){
  printf("The minimum is %d \n", minimum);
  printf("The maximum is %d \n", maximum);
  printf("The mean is %f \n", mean);
  printf("The median is %d \n", median);
}


void print_array (unsigned char test[]) {
  for (int i=0; i<SIZE; i++){
    printf("%d,", test[i]);
  }
  printf("\n");
}

float find_median (unsigned char sorted_array[]) {
int i = 0, 
int median = 0;
if (SIZE % 2 == 0) {
	median = (sorted_array[SIZE/2] + sorted_array[SIZE/2 - 1])/2;
	return median;
	}
	else {
		median = sorted_array [(SIZE/2)];
		return median;
	}
}

float find_mean (unsigned char test[]){
	float mean = 0;
  	for (int i=0; i<SIZE; i++){
    		mean = mean + test[i];
	}
	mean=mean/(SIZE+1);
	return mean;
}


float find_maximum (unsigned char test[]){
	int maximum =0;
	for(int i=0;i<SIZE;i++){
		if(maximum<test[i]){
			maximum=test[i];
		}
	}  
return maximum;
}

float find_minimum (unsigned char test[]){
	int minimum =0;
	for(int i=0;i<SIZE;i++){
		if(minimum>test[i]){
			minimum=test[i];
		}
	}  
return minimum;
}
