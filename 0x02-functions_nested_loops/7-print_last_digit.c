#include "main.h"
/**
 * print_last_digit- to print the last digit of a number
 * @j: the integer to print last digit
 *
 * Return: to always return 0
 */
int print_last_digit(int j)
{
if (j < 0)
{
	j = -j % 10;
	_putchar(j + '0');

}
if (j == 0)
{
	j = 0;
	_putchar(j);
}
else
{
	j = j % 10;
	_putchar(j + '0');
}
return (j);
}


