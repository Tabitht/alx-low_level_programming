#include <stdio.h>
/**
 * main- entry point to run the code
 *
 *
 * Return: always return 0
 */
int main(void)
{
	int i, k;

for (i = '0', k = '0'; i <= '9', k <= '9'; i++, k++)
{
if ((i != k) && (i < k))
{
	putchar('0' + i);

	putchar('0' + k);
if ((i + k) != 17)
{
	putchar(',');

	putchar(' ');
}
}
}
putchar('\n');

	return (0);
}
