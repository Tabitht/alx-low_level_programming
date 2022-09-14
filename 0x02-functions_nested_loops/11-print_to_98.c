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
if (n < 98)
{
while (n <= 98)
{
	printf("%d, ", n++);
	printf("%d\n", n);
}

}
if (n > 98)
{
while (n >= 98)
{
	printf("%d, ", n++);
	printf("%d\n", n);
}

}
if (n == 98)
{
	printf("%d\n", n);
}
}
