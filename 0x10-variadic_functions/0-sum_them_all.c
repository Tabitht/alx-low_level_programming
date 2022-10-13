#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - to sum all the parameters present in its fuction
 * @n: number of parameters passed to the function
 * Return: returns the sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i, sum = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
