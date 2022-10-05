#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * strtow- to split a string into words
 * @str: string to be split
 * Return: returns a character
 */
char **strtow(char *str)
{
	int i, j, wl = 0, sl, nw = 0, k, l = 0;
	char **mp;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (sl = 0; str[sl] != '\0'; sl++)
	{
		if (str[sl] != ' ' && (str[sl + 1]
== ' ' || str[sl + 1] == '\0'))
			nw++;
	}
	mp = (char **) malloc(sizeof(char *) * nw + 1);
	if (mp == NULL)
		return (NULL);
	for (i = 0; i < nw; i++)
	{
		for (sl = 0; str[sl] != ' ' && str[sl + 1] == ' '; sl++)
			wl++;
		mp[i] = malloc(sizeof(char) * wl + 1);
		k = wl;
		if (mp[i] == NULL)
		{
			for (k -= 1; k >= 0; k--)
				free(mp[i]);
			free(mp);
			return (NULL);
		}
		for (j = 0; j < wl; j++)
		{
			mp[i][j] = str[l];
			l++;
		}
		mp[i][j] = '\0';
	}
	mp[i] = NULL;
	mp[i + 1] = NULL;
	return (mp);
}







