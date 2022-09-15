#include "main"
/**
 * print_most_numbers- to print numbers 0-9 while skipping 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);

	_putchar('\n');

	if (i == '2' && i == '4')
		continue;
}

