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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void sort_array(int input_data[],int length);//sort in decending order
int find_minimum(int input_data[],int length);//find minimum
int find_maximum(int input_data[],int length);//find maximum
int find_mean(int input_data[],int length);//find mean
int find_median(int input_data[],int length);//find median
void print_array(int input_data[],int length);//print array
int print_statistics(int input_data[],int length);// print data statistics


/**
 * @brief <Add Brief Description of Function Here>
 *
 * For all functions
 *
 * @param input_data     array of the test data set
 * @param length         length of the array
 *
 */


#endif /* __STATS_H__ */
