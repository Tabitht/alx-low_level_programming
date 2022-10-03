#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array- to create array of chars initialized with specific character
 * @size: size of the array
 * @c: char to be initialized with the array
 * Return: will return a charcter
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);
	if (ptr != NULL)
	{
		for (i = 0; i <= size; i++)
			ptr[i] = c;
	}
	else
		return  (NULL);
	if (size == 0)
		return (NULL);
	return (ptr);
}


