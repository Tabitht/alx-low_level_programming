#include <stdio.h>
/**
 * main- entry point to writing the code
 *
 *
 * Return: to always return 0
 */
int main(void)
{
	int j, k;
for (j = 0; j <= 99; j++)
{
for (k = 1; k <= 99; k++)
{
if (j < k)
{
	putchar((j / 10) + '0');
	putchar((j % 10) + '0');
	putchar(' ');
	putchar(k / 10 + '0');
	putchar((k % 10) + '0');
if (!(j == 98 && k == 99))
{
	putchar(',');
	putchar(' ');
}
}
}
}
	putchar('\n');

	return (0);
}
