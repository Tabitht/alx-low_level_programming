#include "main.h"
/**
 * _strspn- to get the length of a prefix substring
 * @s: string to be searched
 * @accept: string being searched
 * Return: to return an unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				break;
			}
			if (accept[j] == '\0')
				break;
		}
		if (s[i] == ' ')
			break;
	}
	return (length);

}
