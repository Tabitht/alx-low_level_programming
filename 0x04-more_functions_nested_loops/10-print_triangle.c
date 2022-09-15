#include "main.h"
/**
 * print_triangle- to print a tringle
 * @size: to give the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (i = 0; i < size; i++)
			{
				for (j = 0; j < size; j++)
				{
					_putchar(' ');
				}
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
