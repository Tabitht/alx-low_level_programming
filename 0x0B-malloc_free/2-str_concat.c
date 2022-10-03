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
	int i, j, k;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++, i++)
		;
	ptr = malloc(sizeof(char) * i + j);
	if (ptr != NULL)
	{
	for (k = 0; k < j; k++)
	{
		s1[i] = s2[k];
	}
	s1[i] = '\0';
	}
	else
		return (NULL);
	if (s1 == NULL && s2 == NULL)
		return (" ");
	return (ptr);
}

