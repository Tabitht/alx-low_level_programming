#include "main.h"
/**
 * rot13- to encrpyt codes
 * @c: string to be tested
 *
 * Return: returns characters
 */
char *rot13(char *c)
{
	int i, j;

	char b[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char a[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; b[j] != '\0' || a[j] != '\0'; j++)
		{
			if (c[i] == b[j])
			{
				c[i] = a[j];
				break;
			}

		}
	}
	return (c);
}
