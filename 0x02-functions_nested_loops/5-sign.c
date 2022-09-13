#include "main.h"
/**
  * print_sign- to print the signs of number
  *
  *
  * Return- to return 1 if positive, 0 if 0 and -1 if negative
  */
int print_sign(int n)
{
if (n > '1')
{
	_putchar('-');
}
if (n < '1')
{
	_putchar('+');
}
if (n == '0')
{
	_putchar('0');
}
	_putchar('\n');

	return (1);
}
