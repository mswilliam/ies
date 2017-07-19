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
  /* Statistics and Printing Functions Go Here */
	print_array(test, SIZE);
	printf("\nmin :\t%u", *(test + find_minimum_index(test, SIZE)));
	printf("\nmax :\t%u", *(test + find_maximum_index(test, SIZE)));
	printf("\nmean :\t%f", find_mean(test, SIZE));
	printf("\nmedian :\t%u\n", find_median(test, SIZE));
	print_array(test, SIZE);
}


void print_array(unsigned char* t, unsigned char n){
	printf("\n%u", *t);
	for(unsigned char i = 1; i < n; ++i){
		if(i % 10 == 0)
			printf("\n%u", *(t + i));
		else
			printf(",\t%u", *(t + i));
	}
	printf("\n");
}

unsigned char find_minimum_index(unsigned char* t, unsigned char n){
	unsigned char index = 0;
	for(unsigned char i = 1; i < n; ++i){
		if(*(t + i) < *(t + index))
			index = i;
	}
	return index;
}

unsigned char find_maximum_index(unsigned char* t, unsigned char n){
	unsigned char index = 0;
	for(unsigned char i = 1; i < n; ++i){
		if(*(t + i) > *(t + index))
			index = i;
	}
	return index;
}

double find_mean(unsigned char* t, unsigned char n){
	double mean = 0.0;
	for(unsigned char i = 0; i < n; ++i){
		mean += *(t + i);
	}
	return mean / n;
}

void swap(unsigned char* t, unsigned char n, unsigned char m){
	unsigned char tmp = *(t + n);
	*(t + n) = *(t + m);
	*(t + m) = tmp;
}

void sort_array(unsigned char* t, unsigned char n){
	unsigned char index =0;
	for(unsigned char i = 0; i < n - 1; ++i){
		index = find_maximum_index(t + i, n -i);
		swap(t + i, 0, index);
	}
}

unsigned char find_median(unsigned char* t, unsigned char n){
	sort_array(t, n);
	return *(t + (n / 2));
}

/* Add other Implementation File Code Here */
