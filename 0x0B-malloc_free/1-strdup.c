#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * _strdup- to allocate space to a copied string in memory
 * @str: string being copied
 * Return: returns a character
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	for (j = 0; str[j] != '\0'; j++)
		;
	ptr = malloc(sizeof(char) * j + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';
	if (str == NULL)
		return (NULL);
	return (ptr);
	free(ptr);
}
