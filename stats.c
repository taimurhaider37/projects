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
 * @file Assignmet 1 
 * @brief Statistical Data analysis
 *
 * Functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set are defined. The data is sorted from large to small and all the results of the statistics are rounded to the nearest integer. After analysis and sorting is done and results are printed

 * @author SYed Taimur Haider
 * @date 19.03.2021
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
int i;int int_test[SIZE];

//Converting unsigned char to int
for(i = 0; i < SIZE; i++)
  {  int_test[SIZE]=(int)test[SIZE];}




  /* Statistics and Printing Functions Go Here */

//sorting array in decending order
  
//Printing array
printf("\n originol data : \n");  
print_array(int_test, SIZE);
 
print_statistics(int_test, SIZE);



//print stats

}

/* Add other Implementation File Code Here */
// Print Statisticcs
void print_statistics(int input_data[],int length)
{int output[4];
printf("\n Data Statistics : \n");
sort_array(input_data, length);
printf("\nSorted array : \n");
print_array(input_data, SIZE);
output[0]=find_median (input_data,length);
printf("\nMedian : \n");
printf("%d",output[0]);
output[1]=find_mean (input_data,length);
printf("\nMean : \n");
printf("%d",output[1]);
output[2]=find_maximum (input_data,length);
printf("\nMaximum : \n");
printf("%d",output[2]);
output[3]=find_minimum (input_data,length);
printf("\nMinimum : \n");
printf("%d",output[3]);


}


// Print Array 

void print_array(int input_data[],int length)
{
}

//find median

int find_median (int input_data[],int length)

{
   
}

//find mean
int find_mean(int input_data[],int length)
{

}

//find maximum
int find_maximum(int input_data[],int length)
{ 
}
 
//find minimum

int find_minimum(int input_data[],int length) 

{ 


}

//sort_array

int sort_array(int input_data[],int length)
{
}







