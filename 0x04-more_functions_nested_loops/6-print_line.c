#include "main.h"
/**
 * print_line- to print a straight line
 * @n: integer to be tested
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (n = n; n > 0; n--)
			_putchar('_');
		_putchar('\n');
	}
}
