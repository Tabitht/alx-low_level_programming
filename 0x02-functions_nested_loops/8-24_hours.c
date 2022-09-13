#include "main.h"
/**
  * jack_bauer- to print the minute of the day
  *
  *
  * Return- to return void
  */
void jack_bauer(void)
{
	int k, j;
	k = 0;
while (k <= 23);
{
	j = 0;
while (j <= 59);
{
	_putchar((k / 10) + '0');
	_putchar((k % 10) + '0');
	_putchar(':');
	_putchar((j / 10) + '0');
	_putchar((j % 10) + '0');
	_putchar('\n');
	j++;
}
	k++;
}
}
