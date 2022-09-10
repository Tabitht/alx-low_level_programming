#include <stdio.h>
/**
 * main- entry point to run the code
 *
 *
 * Return: to always return 0
 */
int main(void)
{
	int x;
	int y;
	int z = 0;
while (z <= 9)
{
	y = 0;
while (y <= 9)
{
	x = 0;
while (x <= 9)
{
if ((z != y) && (y != x) && (z < y) && (y < x))
{
	putchar('0' + z);
	putchar('0' + y);
	putchar('0' + x);
if (x + y + z != 9 + 8 + 7)
{
	putchar(',');
	putchar(' ');
}
}
x++;
}
y++;
}
z++;
}
putchar('\n');
	return (0);
}
