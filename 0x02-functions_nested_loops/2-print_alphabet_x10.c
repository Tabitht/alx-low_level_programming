#include "main.h"
/**
  * print_alphabet_x10- to print out lower case alphabet 10 times in newline
  *
  * Return- to return void
  */
void print_alphabet_x10(void)
{
	int i, j;
for (i = 0; i <= 9; i++)
{
for (j = 'a'; j<= 'z'; j++)
{
	_putchar(j);
}
	_putchar('\n');
}
}

