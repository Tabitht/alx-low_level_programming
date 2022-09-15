#include "main.h"
/**
 * print_square- to print a square
 * @size: to give size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (k = 0; k < size; k++)
		{
			for (size = size; size > 0; size--)
			_putchar('#');
		_putchar('\n');
		}
		_putchar('\n');
	}
}
