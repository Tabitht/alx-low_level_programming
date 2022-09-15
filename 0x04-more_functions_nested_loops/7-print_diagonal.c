#include "main.h"
/**
 * print_diagonal- to print diagonal lines
 * @n: integer number to print number of times diagonal line appears
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		for (n = n; n > 0; 0++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
