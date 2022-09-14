#include "main.h"
#include <stdio.h>
/**
 * main- the entry point of program
 *
 *
 * Return: to retun 0
 */
int main(void)
{
	int n;
	long int i = 0, j = 1, add;
	for (n = 1; n <= 50; n++)
	{
		add = i + j;
		i = j;
		j = add;
		if (n == 50)
			printf("%lu\n", add);
		else
			printf("%lu, ", add);
	}
	return (0);
}
