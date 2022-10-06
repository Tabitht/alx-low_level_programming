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
	int i, k, q = 0;
	int j = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
			j += 1;
	}
	j += ac;
	ptr = malloc(sizeof(char) * j + 1);
	if (ptr != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			for (k = 0; av[i][k] != '\0'; k++)
			{
				ptr[q + i] = av[i][k];
				q++;
			}
			if (ptr[q + i] == '\0')
				ptr[q + i] = '\n';
		}
	}
	else
		return (NULL);
	return (ptr);
}








