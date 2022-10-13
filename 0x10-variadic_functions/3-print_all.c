#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all- to print any thing
 * @format: the different format it can print
 * Return: void
 */
void print_all(const char * const format, ...)
{
	char *s, c;
	float f;
	int i;
	va_list all;

	va_start(all, format);
	while (format)
	{
		switch(*format++)
		{
			case 's':
				s = va_arg(all, char *);
				printf("%s", s);
			case 'c':
				c = (char) va_arg(all, int);
				printf("%c", c);
			case 'f':
				f = va_arg(all, float);
				printf("%f", f);
			case 'i':
				i = va_arg(all, int);
				printf("%d", i);
		}
	}
	printf("\n");
	va_end(all);
}



