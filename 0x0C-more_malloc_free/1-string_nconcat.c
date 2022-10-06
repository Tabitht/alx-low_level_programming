#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat- to concatenate 2 strings, with a given length of 2nd string
 * @s1: first string to add to
 * @s2: second string to be added
 * @n: length of 2nd string to add to first string
 * Return: returns a pointer that points to the concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= strlen(s2))
		n = strlen(s2);
	ptr = malloc(sizeof(*ptr) * (strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < strlen(s1); a++, c++)
		ptr[c] = s1[a];
	for (b = 0; b < n; b++, c++)
	{
		ptr[c] = s2[b];
	}
	ptr[c] = '\0';
	return (ptr);
}
