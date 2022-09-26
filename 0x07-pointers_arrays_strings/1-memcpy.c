#include "main.h"
/**
 * _memcpy- to copy a memory area
 * @dest: destination of memory being copied
 * @src: memory area being copied
 * @n: bytes of memory being copied
 * Return: returns a character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; n--, i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
