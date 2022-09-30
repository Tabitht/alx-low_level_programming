#include "main.h"
/**
 * _strcpy- to copy the string pointed to
 * @dest: where it is being copied to
 * @src: what is being copied
 * Return: returns a char
 */
char *_strcpy(char *dest, char *src)
{
	int k, i;

	for (k = 0; src[k] != '\0'; k++)
	{
	}
	for (i = 0; i <= k; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
