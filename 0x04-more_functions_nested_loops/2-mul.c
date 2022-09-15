#include "main.h"
/**
 * mul- to multiply two given integers
 * @a: first operahand for multiplication
 * @b: second operahand for multiplication
 * Return: to return an integer
 */
int mul(int a, int b)
{
	int c;

	c = a * b;
	if (a == -a || b == -b)
	{
		_putchar('-');
		_putchar(c);
	}
	else
		_putchar(c);

	return (0);
}
