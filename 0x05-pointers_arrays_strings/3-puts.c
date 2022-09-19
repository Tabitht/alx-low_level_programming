#include "main.h"
/**
 * _puts- to print a string to standard output
 * @str: string to be tested
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
	_putchar('\n');
}
