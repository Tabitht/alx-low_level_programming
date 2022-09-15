#include "main.h"
/**
 * more_numbers- to print numbers 0-14 x10
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar((j % 100) + '0');
		}
		_putchar('\n');
	}
}
