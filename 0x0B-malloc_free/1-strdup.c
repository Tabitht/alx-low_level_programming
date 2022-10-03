#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup- to allocate space to a copied string in memory
 * @str: string being copied
 * Return: returns a character
 */
char *_strdup(char *str)
{
	char *ptr;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr = malloc(sizeof(char) * i + 1);
	}
	ptr[i + 1] = '\0';
	if (ptr == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
		ptr[j] = str[j];
	if (str == NULL)
		return (NULL);
	return (ptr);
	free(ptr);
}
