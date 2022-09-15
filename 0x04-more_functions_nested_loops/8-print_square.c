#include "main.h"
/**
 * print_square- to print a square
 * @size: to give size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (size = size; size > 0; 0++)
		{
			for (size = size; size > 0; 0++)
			{
			_putchar('#');
			}
		_putchar('\n');
		}
	}
}
