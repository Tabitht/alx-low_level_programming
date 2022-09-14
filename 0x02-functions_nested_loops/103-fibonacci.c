<<<<<<< HEAD
#include "main.h"
#include <stdio.h>
/**
 * main- entry point
 * description: print the sum of even fibonacci to a fib value
 * not exceeding 4,000,000
=======
#include <stdio.h>
/**
 * main- entry point to run code
 * Description: print the number of even fibonacci numbers up to a fib value
 * Not exceeding 4,000,000
>>>>>>> d039a5e3e28cb5ccdb8cb9c4117a0c243bd4f1df
 * Return: 0
 */
int main(void)
{
<<<<<<< HEAD
	int i= 1
=======
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
>>>>>>> d039a5e3e28cb5ccdb8cb9c4117a0c243bd4f1df
