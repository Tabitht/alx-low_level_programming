#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");
/* separating the value of i pushes the loop on */
	i = 0;
/* separating the value of i pushes the loop on */
	while (i < 10)
	{
		putchar(i);
	}
/* separating the value of i pushes the loop on */
	printf("Infinite loop avoided! \\0/\n");

	return (0);
}
