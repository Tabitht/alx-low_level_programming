#include "main.h"
#include <string.h>
/**
 * compare- to check if a string is palindrome
 * @s: string to be tested
 * @n: length of the string
 * Return: returns 1 if true, 0 if false
 */
int compare(char *s, int n)
{
	if (n < 1)
		return (1);
	if (*s == *(s + n))
	{
		return (compare(s + 1, n - 2));
	}
	return (0);
}
/**
 * is_palindrome- to check if a string is palindr
 * ome i.e if a string when read backwards gives
 * the same word as when read forward
 *
 * @s: string to be checked
 * Return: returns 1 if it is a palindrome else it returns 0
 */
int is_palindrome(char *s)
{
	int i = strlen(s);

	return (compare(s, i - 1));
}
