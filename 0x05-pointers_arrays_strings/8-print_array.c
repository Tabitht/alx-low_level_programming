#include "main.h"
#include <stdio.h>
/**
 * print_array- to print the element of array integers
 * @a: pointer to be tested
 * @n: integer to be tested
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

