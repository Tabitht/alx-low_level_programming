#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * str_concat- to concatenate two strings together
 * @s1: original string
 * @s2: string being concatenated
 * Return: returns a character
 */
char *str_concat(char *s1, char *s2)
{
	int k, L = 0;
	char *ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	if (ptr == NULL)
		return (NULL);
	for (k = 0; (ptr[L] = s1[k]) != '\0'; ++k, ++L)
		;
	for (k = 0; (ptr[L] = s2[k]) != '\0'; ++k, ++L)
		;
	ptr[L] = '\0';
	return (ptr);
}

