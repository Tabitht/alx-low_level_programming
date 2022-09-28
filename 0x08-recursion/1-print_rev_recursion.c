#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion- to print a string in reverse
 * @s: string to be printed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}
