#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_separator- prints a separator string for the parameters of a function
 * @n: the iterating number
 * @string: string to be iterated
 * Return: void
 */
void print_separator(int n, const char * string)
{
	int len = strlen(string);

	if (n < len - 1)
	{
		switch (string[n])
		{
			case 'c':
				printf(", ");
				break;
			case 'i':
				printf(", ");
				break;
			case 'f':
				printf(", ");
				break;
			case 's':
				printf(", ");
				break;
		}
	}
}
/**
 * print_all- to print any thing
 * @format: the different format it can print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char c, *s;
	int i;
	float f;
	va_list all;
	int j = 0;

va_start(all, format);
while (format[j] != '\0')
{
	switch (format[j])
	{
		case 'c':
			c = (char) va_arg(all, int);
			printf("%c", c);
			break;
		case 's':
			s = va_arg(all, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		case 'i':
			i = va_arg(all, int);
			printf("%d", i);
			break;
		case 'f':
			f = (float) va_arg(all, double);
			printf("%f", f);
			break;
	}
	print_separator(j, format);
	j++;
}
printf("\n");
va_end(all);
}
