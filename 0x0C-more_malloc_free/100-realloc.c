#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _realloc- to reallocate a memory using malloc and free
 * @ptr: pointer to the memory initially allocated
 * @old_size: the old size of the allocated bytes
 * @new_size:the new size of the new memory
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size <= old_size)
		return (ptr);
	ptr2 = malloc(new_size);
	if (new_size > old_size)
	{
		memcpy(ptr2, ptr, old_size);
	}
	return (ptr2);
}
