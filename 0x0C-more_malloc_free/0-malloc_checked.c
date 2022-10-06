#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked- to allocate memory
 * @b: the size of space to be allocated
 * Return: returns void
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
