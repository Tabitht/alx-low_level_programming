#include "main.h"
/**
 * _strchr- to locate a character in a string
 * @s: the string from which character is located
 * @c: the character to locate
 *
 * Return: returns a char
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		s++;

	}
	if (*s == c)
		return (s);
	return (0);
}
