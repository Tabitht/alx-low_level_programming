#include "main.h"
/**
  * times_table- to print out the 9 times-table
  *
  *
  * Return- to return void
  */
void times_table(void)
{
	int i, j, k;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
	k = j * i;
if (j == 0)
{
	_putchar(k + '0');
}
if ((k <= 9) && (j != 0))
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(k + '0');
}
else if (k >= 10)
{
	_putchar(',');
	_putchar(' ');
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
}
}
	_putchar('\n');
}
}
