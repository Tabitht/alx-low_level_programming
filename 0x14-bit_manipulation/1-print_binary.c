#include "main.h"
/**
 * print_binary- prints the binary representation of a number
 * @n: number to be converted
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;

	for (i = 1 << 31; i > 0; i = i / 2)
	{
		(n & i) ? _putchar('1') : _putchar('0');
	}
}
