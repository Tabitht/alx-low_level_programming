#include "main.h"
/**
 * _memset- to fill a memory with a constant byte
 * @s: the character being pointed to
 * @b: the constant byte
 * @n: the first size of the memory area
 * Return: to return a char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
