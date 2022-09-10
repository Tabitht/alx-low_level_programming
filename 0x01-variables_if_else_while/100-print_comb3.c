#include <stdio.h>
/**
 * main- entry point to run the code
 *
 *
 * Return: always return 0
 */
int main(void)
{
	int k;
	int i = 0;
while (i <= 9)
{
	k = 0;
while (k <= 9)
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
k++;
}
i++;
}
putchar('\n');

	return (0);
}
