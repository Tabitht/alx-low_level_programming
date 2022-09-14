#include <stdio.h>
/**
 * main - causes an infinite loop
 * Return: 0
 */
/* while (i < 10) is an infinite loop without any statement to make i = 9 */
int main(void)
{
	int i;

	printf("infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}
	printf("Infinite loop avoided! \\0/\n");

	return (0);
}
