#include "main.h"
/**
 * wildcmp- to compare two strings to see if its identical
 * @s1: main string to compare from
 * @s2: string being compared
 * Return: returns 1 if identical else returns 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1++ != '\0' && *s1++ != '\0')
		return (wildcmp(s1++, s2++));
	if (*s1++ == *s2++)
		return (1);
	else
		return (0);

}
