#include "main.h"
/**
 * _strcat- to concantenate two strings
 * @dest: where it catenates too
 * @src: string being catenated
 * Return: returns the character
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
