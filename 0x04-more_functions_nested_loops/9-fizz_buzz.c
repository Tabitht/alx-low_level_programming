#include <stdio.h>
/**
 * main- entry point to run the code
 *
 * Return: to return 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if (a % 3 == 0)
		{
			printf(" Fizz");
			continue;
		}
		if (a % 5 == 0)
		{
			printf(" Buzz");
			continue;
		}
		if (a == (a % 3 == 0) && a == (a % 5 == 0))
		{
			printf(" FizzBuzz");
			continue;
		}
		printf(" %d", a);
	}
	printf("\n");

	return (0);
}
