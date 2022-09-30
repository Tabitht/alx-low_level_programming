#include "main.h"
/**
 * factorial- to return the factorial of a given number
 * @n: given integer to return factorial
 *
 * Return: to return an integer
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
