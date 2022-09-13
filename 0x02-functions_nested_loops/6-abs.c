#include "main.h"
/**
  * _abs- to print the absolute values of numbers
  *
  *
  * Return- to always return 0
  */
int _abs(int r)
{
	int sum;
	sum = - (-r);
if (r < '1')
{
	_putchar(sum);
}
if (r == '0')
{
	_putchar('0');
}
if (r > '1')
{
	_putchar(r);
}
	_putchar('\n');

	return (0);
}
