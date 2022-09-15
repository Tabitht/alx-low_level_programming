#include <stdio.h>
/**
 * main- entry point to run code
 *
 * Return: returns 0
 */
int main(void)
{
	long int i;
	long int y;

	i = 612852475143;
	for (y = 2; y < i; y++)
	{
		if (i % y == 0)
		{
			i = i / y;
		}
	}
	printf("%ld\n", y);
	return (0);
}
