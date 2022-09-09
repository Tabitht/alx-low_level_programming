#include <stdio.h>
/**
 * main- entry point to run the code
 *
 *
 * Return: to always return 0
 */
int main(void)
{
	int i;
for (i = '0'; i <= '8'; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('9');

	return (0);
}
