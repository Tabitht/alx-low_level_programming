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
for (k = 0; k <= 23; k++)
{
for (j = 0; j <= 59; j++)
{
if (k < j && k == j)
{
	_putchar('0' + k);
	_putchar(':');
	_putchar('0' + j);
	_putchar('\n');
}
}
}
}
