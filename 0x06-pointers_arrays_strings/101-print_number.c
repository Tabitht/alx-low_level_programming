#include "main.h"
/**
 * print_number- to print integers
 * @n: integer to be tested
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int i;

	i = 0;
	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else
		i = n;
	if (i / 10)
	{
		print_number(i / 10);
	}
		_putchar((i % 10) + '0');
}
