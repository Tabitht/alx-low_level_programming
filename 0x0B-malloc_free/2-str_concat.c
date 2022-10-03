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
	int i, j, k= 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
		;
	for (j = 0; s1[j] != '\0'; j++)
		;

	ptr = malloc(sizeof(char) * i);
	if (ptr != NULL)
	{
		for (k = 0; s2[k] != '\0'; k++)
		{
			s1[j] = s2[k];
		}
			s1[j] = '\0';
	}
	else
		return (NULL);
	if (s1 == NULL || s2 == NULL)
		return (" ");
	return (ptr);
}

