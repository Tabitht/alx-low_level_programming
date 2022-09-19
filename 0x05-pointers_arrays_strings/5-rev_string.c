#include "main.h"
/**
 * rev_string- reverses a given string
 * @s: string to be tested
 *
 * Return: void
 */
void rev_string(char *s)
{
	int x, y;

	y = 0;
	x = _strlen(s);
	while (y < x)
	{
		y++;
		*s--;
		_putchar(*s);
	}
}

