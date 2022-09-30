#include "main.h"
/**
 * _puts_recursion- to print a string
 * @s: string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{

	if (*s++ != '\0')
	{
		_putchar(s[0 - 1]);
		_puts_recursion(s++);
	}
	else
		_putchar('\n');
}
