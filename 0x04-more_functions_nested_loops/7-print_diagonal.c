#include "main.h"
/**
 * print_diagonal- to print diagonal lines
 * @n: integer number to print number of times diagonal line appears
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int k, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar('\n');
		}
	}
}
