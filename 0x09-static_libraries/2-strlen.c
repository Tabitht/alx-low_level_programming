#include "main.h"
/**
 * _strlen- to find the length of a string
 * @s: string to be tested
 *
 * Return: it returns the length of the string
 */
int _strlen(char *s)
{
	int i, y;

	y = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
		y++;
	}

	return (y);
}
