#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * str_concat- to concatenate two strings together
 * @s1: original string
 * @s2: string being concatenated
 * Return: returns a character
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, L;

	if (s1 == NULL || s2 == NULL)
		return (" ");
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr != NULL)
	{
		for (k = 0; (ptr[k] = s1[k]) != '\0'; k++)
			;
		for (L = 0; (ptr[L] = s2[L]) != '\0'; L++)
			;
		ptr[L] = '\0';
	}
	else
		return (NULL);
	return (ptr);
}

