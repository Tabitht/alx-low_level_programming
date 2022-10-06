#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_length- to get the legth of a given array
 * @min: the minimum number in the array
 * @max: the maximum number in the array
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
	int i, j;

	if (min > max)
		return(NULL);
	i = array_length(min, max);
	ptr = malloc(sizeof(int) * i);
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < i; j++)
	{
		ptr[j] = min + j;
	}
	return (ptr);
}
