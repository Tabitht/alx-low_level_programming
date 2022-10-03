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
	int i;
	int y = strlen(str);

	ptr = malloc(y + 1);
	if (ptr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
			ptr[i] = '\0';
	}
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	return (ptr);
	free(ptr);
}
