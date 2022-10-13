#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_strings- to print the strings passed as parameters to the function
 * @separator: string used to separate the strings passed to function
 * @n: number of strings passed as parameters
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (strcmp(s, "\0") == 0)
			printf("(nil)");
		else
			printf("%s", s);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
