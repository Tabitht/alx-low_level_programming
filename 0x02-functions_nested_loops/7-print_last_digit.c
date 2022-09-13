#include "main.h"
/**
 * print_last_digit- to print the last digit of a number
 * @j: the integer to print last digit
 *
 * Return: to always return 0
 */
int print_last_digit(int j)
{
	int a;
if (j < 0)
{
	j = -j;
	a = j % 10;
}
if (a < 0)
a = -a;
_putchar(a + '0');
return (a);
}


