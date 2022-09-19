#include "main.h"
/**
 * _strlen- to find the length of a string
 * @s: string to be tested
 *
 * Return: it returns the length of the string
 */
int _strlen(char *s)
{
	int y;

	y = 0;
	while (*s != '\0')
	{
		y++;
		*s++;
	}

	return (y);
}
