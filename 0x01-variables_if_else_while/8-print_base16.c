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
	char ch;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
for (ch = 'a'; ch <= 'f'; ch++)
{
putchar(ch);
}
putchar('\n');

	return (0);
}
