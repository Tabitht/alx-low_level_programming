#include "main.h"
/**
 * swap_int- to swap the value of two integers
 * @a: first operahand
 * @b: second operahand
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int y;

	y = *a;
	*a = *b;
	*b = y;
}
