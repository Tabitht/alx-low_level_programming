#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main- The entry point to run the code
 *
 * Description: to tell if a number is positive or negative or zero)?
 * Return: will always return zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	printf("%d is zero\n", n);

	if (n < 0)
	printf("%d is negative\n", n);

	if (n > 0)
	printf("%d is positive\n", n);

	return (0);
}
