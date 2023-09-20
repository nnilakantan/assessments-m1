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
 * @file <stats.h> 
 * @brief <First peer reviewed assignment>
 *
 * <stats.h of the first peer reviewed assignment>
 *
 * @author <Nikhil Nilakantan>
 * @date <09/18/2023>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Printing statistics of a given array
 *
 * Function to print statistics of given array
 *
 * @param minimum minimum of array
 * @param maximum maximum of array
 * @param mean mean of array
 * @param median median of array
 *
 * @return void
 */
void print_statistics (int minimum, int maximum, float mean, float median);
void print_array (unsigned char array[]);
float find_median (unsigned char array[]);
float find_mean (unsigned char array[]);
int find_minimum (unsigned char array[]);
int find_maximum (unsigned char array[]);
void sort_array (unsigned char array[]);

#endif /* __STATS_H__ */
