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
	for (k = 0; k < i; k++)
	{
		if (haystack[k] == needle[0])
		{
			for (l = 0; l < j; l++)
			{
				if (haystack[k + l] == needle[l])
					return (haystack +k + l);
			}
		}
	}
	if (l == j)
		return (needle);
	return (0);

}
