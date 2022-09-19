#include "main.h"
/**
 * puts_half- to print the second half of a string
 * @str: string to be tested
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, k, n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	n = (i - 1) / 2;
	for (k = n + 1; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}

