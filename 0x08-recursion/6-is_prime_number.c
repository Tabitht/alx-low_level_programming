#include "main.h"
/**
 * prime- to check for prime numbers
 * @n: number to be checked
 * @i: number that checks n
 * Return: to return 1 if true else returns 0
 */
int prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == i)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (prime(n, i + 1));
}
/**
 * is_prime_number- to check if an input integer is a prime number
 * @n: integer to be checked
 *
 * Return: returns 1 if true else returns 0
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
