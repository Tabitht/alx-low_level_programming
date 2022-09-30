#include "main.h"
/**
 * _strpbrk- to search for a string for any of a set of bytes
 * @s: string to be searched
 * @accept: string being searched
 * Return: to return a character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	if (s[i] != '\0')
		return (s + i);

	return (0);

}
