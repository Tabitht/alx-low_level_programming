#include "main.h"
#include <stdio.h>
/**
 * main- entry point to run code
 *
 *
 * Return: 0(success)
 */
int main(void)
{
	int n, add = 0;
	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 || (n % 5) == 0)
			add = add + n;
	}
	printf("%d\n", add);
	return (0);
}
