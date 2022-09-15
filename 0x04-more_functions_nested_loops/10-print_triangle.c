#include "main.h"
/**
 * print_triangle- to print a tringle
 * @size: to give the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - 1 - i; j > 0; j--)
			{
				_putchar(' ');
			}
				for (k = 0; k <= i; k++)
				{
					_putchar('#');
				}
			_putchar('\n');
		}
	}
}
