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
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
			if (haystack[i] == needle[j])
			{
			return (haystack + i);
			}
	}
	if (haystack[i] == '\0')
		return (haystack);
	return (0);
}