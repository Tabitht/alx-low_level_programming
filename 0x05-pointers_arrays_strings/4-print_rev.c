#include "main.h"
/**
 * print_rev- to print a string in reverse
 * @s: string to be tested
 *
 * Return: void
 */
void print_rev(char *s)
{
	s = *s;
	while (*s <= _strlen(s))
	{
		_putchar(*s);
		*s--;
	}
	_putchar('\n');
}
