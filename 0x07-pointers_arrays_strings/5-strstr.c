#include "main.h"
/**
 * _strstr- to locate a substring
 * @haystack: string to search from
 * @needle: string being searched
 *
 * Return: to return a character
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k, l;

	for (i = 0; haystack[i] != '\0'; i++)
	{
	}
	for (j = 0; needle[j] != '\0'; j++)
	{
	}
	for (k = 0; k < i - j + 1; k++)
	{
		for (l = 0; l < j; l++)
		{
			if (needle[l] != haystack[k + l])
				break;
		}
		if (needle[l] == '\0')
			return (haystack + k);
	}
	return (0);

}
