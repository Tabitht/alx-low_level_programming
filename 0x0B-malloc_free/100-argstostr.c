#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * argstostr- to concatenate all the argument of tge program
 * @ac: number of arguments
 * @av: arguments of the program
 * Return: returns a char
 */
char *argstostr(int ac, char **av)
{
	int i, k;
	size_t j = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j += strlen(av[i]);
	}
	ptr = malloc(sizeof(char) * j + ac);
	if (ptr != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (k = 0; av[i][k] != '\0'; k++)
			{
				ptr[j] = av[i][k];
				j++;
			}
			ptr[j] = '\n';
		}
		ptr[j] = '\0';
		return (ptr);
	}
	else
		return (NULL);
}








