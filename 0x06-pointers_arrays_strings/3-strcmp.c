#include "main.h"
/**
 * _strcmp- to compare two strings
 * @s1: first operahand
 * @s2: second operahand
 * Return: returns an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	j = -1;
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			s1[i] = 0;
			s2[i] = s1[i];
		}
		if (s1[i] > s2[i])
		{
			s1[i] - s2[i]
}
