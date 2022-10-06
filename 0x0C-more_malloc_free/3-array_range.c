#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_length- to get the legth of a given array
 * @min: the first element of array
 * @max: the last element of the array
 * Return: returns the length of the array
 */
int array_length(int min, int max)
{
	int i = 0;

	while (min <= max)
	{
		i++;
		min++;
	}
	return (i);
}
/**
 * array_range- to create an array of integers
 * @min: the minimum range of integer in array
 * @max: the maximum range of integer in array
 * Return: returns a pointer to the array created
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, j = 0;

	if (min > max)
		return(NULL);
	i = array_length(min, max);
	ptr = malloc(sizeof(int) * i);
	if (ptr == NULL)
		return (NULL);
	while (i > 0)
	{
		ptr[j] = min;
		min += 1;
		i--;
	}
	return (ptr);
}
