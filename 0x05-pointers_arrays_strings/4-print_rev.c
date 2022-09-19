#include "main.h"
/**
 * print_rev- to print a string in reverse
 * @s: string to be tested
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i, y;

	for (y = 0; s[y] != '\0'; y++)
	{
	}
	for (i = y - 1; i >= 0;  i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
