#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc- to allocate memory to an array
 * @nmemb: no of elements in the array
 * @size: bytes size of elements in the array
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
