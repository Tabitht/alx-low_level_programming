#include "main.h"
#include <stdio.h>
/**
 * print_to_98- to print from any number to 98
 * @n: integer to be tested
 *
 * Return: to return void
 */
void print_to_98(int n)
{
	int i, j;
if (n <= 98)
{
for (n = 0; n <= 98; n++)
{
if (i != 98)
{
	printf("%d, ", i);
}
else if ( i == 98)
{
	printf("%d\n", i)
}
}
else if (n >= 98)
{
for (j = n; j >= 98; j--)
{
if (j != 98)
{
	printf("%d, ", j);
}
else if (j == 98)
	printf("%d\n", j);
}
}
}
