#include <stdio.h>
/**
 * main- entry point to run the code
 *
 * Return: to return 0
 */
int main(void)
{
	int a;

	for (a = 1; a <= 100; a++);
	{
		printf("%d", a);

		if (a % 3 == 0)
			printf("Fizz");
		if (a % 5 == 0)
			printf("Buzz");
		if (a == (a % 3 == 0 && a % 5 == 0))
			printf("FizzBuzz");
	}
	printf("\n");

	return (0);
}
