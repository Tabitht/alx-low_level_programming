#include "main.h"
/**
 * reverse_array- to reverse the contents of an array
 * @a: pointer that points to the array
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j, k, l;

	i = 0;
	k = n - 1;
	while (k >= i)
	{
		 j = a[k];
		 l = a[i];
		 a[k] = l;
		 a[i] = j;
		 k--;
		 i++;
	}
}
