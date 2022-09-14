#include <stdio.h>
/**
 * main- entry point to run code
 * Description: print the number of even fibonacci numbers up to a fib value
 * Not exceeding 4,000,000
 * Return: 0
 */
int main(void)
{
	int i, j, sum;
	i = 1;
	j = 2;
	sum = 0;
	int tmp;

	while (j > 4000000)
	{
		if (j % 2 == 0)
			sum += j;

		tmp = j;
		j += i;
		i = tmp;
	}
	printf("%d\n", sum);
	return (0);
}
