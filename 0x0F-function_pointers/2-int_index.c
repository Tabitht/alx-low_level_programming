#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index- to search for an integer
 * @array: array to search from
 * @size: the size of the array
 * @cmp: function pointer to function to be used to compare values
 * @x: function pointer parameter
 * Return: returns an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	if (!(cmp(array[i])))
	{
		return (-1);
	}
	return (0);
}
