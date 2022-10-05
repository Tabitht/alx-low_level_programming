#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * word_length- to count number of letters in a word
 * @str: string to count letters of words from
 * Return: returns an int
 */
int word_length(char *str)
{
	int sl, wl = 0;

	for (sl = 0; str[sl] && str[sl] != ' '; sl++)
	{
		wl++;
	}
	return (wl);
}
/**
 * strtow- to split a string into words
 * @str: string to be split
 * Return: returns a character
 */
char **strtow(char *str)
{
	int i, j, wl, sl, nw = 0, k = 0;
	char **mp;

	if (str == NULL || str == ' ' || *str == '\0')
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
		while (str[k] == ' ')
			k++;
		wl = word_length(str + k);
		mp[i] = malloc(sizeof(char) * wl + 1);
		if (mp[i] == NULL)
		{
			for (k -= 1; k >= 0; k--)
				free(mp[i]);
			free(mp);
			return (NULL);
		}
		for (j = 0; j < wl; j++)
		{
			mp[i][j] = str[k];
			k++;
		}
		mp[i][j] = '\0';
	}
	mp[i] = NULL;
	mp[i + 1] = NULL;
	return (mp);
}







