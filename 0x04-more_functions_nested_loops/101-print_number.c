#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);

/**
 * print_number - to print out an integer
 * @n: operahand to be tested
 *
 * Return: void
 */
void print_number(int n)
{
	unsigned int m;

	m = 0;
	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
	{
		m = n;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar ((m % 10) + '0');
}
