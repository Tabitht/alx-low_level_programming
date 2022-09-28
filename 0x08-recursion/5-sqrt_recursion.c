#include "main.h"
/**
 * mainsqrt- to find the square root of a number
 * @n: square of the number
 * @k: square root of number
 * Return: to return an int
 */
int mainsqrt(int n, int k)
{

	if (n < k * k)
		return (-1);
	if (k * k == n && k < n)
		return (k);
	else
		return (mainsqrt(n, k + 1));
}
/**
 * _sqrt_recursion- to return the natural square root of n
 * @n: any given number to return its square root
 *
 * Return: to return an integer
 */
int _sqrt_recursion(int n)
{
		return (mainsqrt(n, 1));
}
