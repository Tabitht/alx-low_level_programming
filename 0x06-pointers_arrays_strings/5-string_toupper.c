#include "main.h"
/**
 * string_toupper- to change lowercase strings to uppercase
 * @a: string to be tested
 * Return: to return a character
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
