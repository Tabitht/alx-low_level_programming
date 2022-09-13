#include "main.h"
/**
  * print_sign- to print the signs of number
  * @n: integer to be tested
  *
  * Return: to return 1, 0 or -1
  */
int print_sign(int n)
{
if (n > '0')
{
	_putchar('+');
	return (1);
}
if (n < '0')
{
	_putchar('-');
	return (-1);
}
if (n == '0')
{
	_putchar('0');
}
	return (0);
}

