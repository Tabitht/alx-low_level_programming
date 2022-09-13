include "main.h"
/**
  * jack_bauer- to print the minute of the day
  *
  *
  * Return- to return void
  */
void jack_bauer(void)
{
	int k, j, i, l;
for (k = 0; k <= 2; k++)
{
for (j = 0; j <= 3; j++)
{
for (i = 0; i <= 5; i++)
{
for (l = 0; l <= 9; l++)
{
if ((k < j && j < i && i < l) && (k == j && i == l&& k == i && k == l && j== i && j== l))
{
	_putchar(k + '0');
	_putchar(j + '0');
	_putchar(':');
	_putchar(i + '0');
	_putchar(j + '0');
	_putchar('\n');
}
}
}
}
}
	_putchar('\n');
}
