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
	char *s, c, a[] = {'s', 'c', 'i', 'f'};
	float f;
	int i, j = 0, k = 0;
	va_list all;

	va_start(all, format);
	while (format[j] != '\0')
	{
		while (k < 4)
		{
			if (format[j] != a[k])
				break;
			k++;
		}
		if (format[j] == a[k])
			continue;
		switch(format[j])
		{
			case 's':
				s = va_arg(all, char *);
				printf("%s", s);
				break;
			case 'c':
				c = (char) va_arg(all, int);
				printf("%c", c);
				break;
			case 'f':
				f = (float) va_arg(all, double);
				printf("%f", f);
				break;
			case 'i':
				i = va_arg(all, int);
				printf("%d", i);
				break;
		}
		j++;
	}
	printf("\n");
	va_end(all);
}



