#include "main.h"
/**
 * _strncpy-to copy a string
 * @dest: where it is being copied to
 * @src: what is being copied
 * @n: integer to be tested
 * Return: returns a character
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
