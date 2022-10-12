#include  <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator- to execute a given function on each element of an array
 * @array: name of given array
 * @size: size of the array
 * @action: the function pointer to the function to be executed
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
