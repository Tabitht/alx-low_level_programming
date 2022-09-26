#include "main.h"
#include <stdio.h>
/**
 * print_diagsums- to print the sum of two diagonals of a square matrix of integers
 * @a: matrix to be summed
 * @size: size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i];
	}
	while (i <= 0)
	{
		sum2 += a[i];
		i--;
	}
	printf("%d, %d", sum1, sum2);

}
