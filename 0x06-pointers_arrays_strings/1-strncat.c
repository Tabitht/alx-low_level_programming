#include "main.h"
/**
 * _strncat- to concatenate two strings
 * @dest: where it is being tested to
 * @src: string to be tested
 * @n: integer to be tested
 * Return:to return a character
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
