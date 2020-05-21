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

/*
print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
print_array() - Given an array of data and a length, prints the array to the screen
find_median() - Given an array of data and a length, returns the median value
find_mean() - Given an array of data and a length, returns the mean
find_maximum() - Given an array of data and a length, returns the maximum
find_minimum() - Given an array of data and a length, returns the minimum
sort_array(unsigned char test[SIZE]) - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
*/

void print_array(unsigned char*, unsigned char);
unsigned char find_minimum_index(unsigned char*, unsigned char);
unsigned char find_maximum_index(unsigned char*, unsigned char);
double find_mean(unsigned char*, unsigned char);
void sort_array(unsigned char*, unsigned char);
unsigned char find_median(unsigned char*, unsigned char);

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


#endif /* __STATS_H__ */
