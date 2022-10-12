#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add- to return sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the sum of the two integers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub- to return the difference between 2 integers
 * @a: first integer
 * @b: second integer
 * Return: returns the difference between both integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul- to return the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the product of both integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div- to return the result of division between two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the result of the function
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod- to find the remainder between two integers
 * @a: first integer
 * @b: second integer
 * Return: returns the remainder of both integers
 */
op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
