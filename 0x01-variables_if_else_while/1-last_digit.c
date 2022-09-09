#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- the entry point for the code to run
 *
 * Decription: using conditional statement with last digit of a number
 * Return: will always return 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int i= n % 10;
	if (i > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, i);

	if (i == 0)
	printf("Last digit of %d is %d and is 0\n", n, i);

	if ((i < 6) && (i != 0))
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);

	return (0);
}
