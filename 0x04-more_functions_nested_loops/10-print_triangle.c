#include "main.h"
/**
 * print_triangle- to print a tringle
 * @size: to give the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (size = size; size > 0; size--)
		{
			for (size = size; size > 0; size--)
			{
				for (size = size; size > 0; size--)
			{
				_putchar('#');
				_putchar('\n');
			}
		}
	}
}

