#include "main.h"
/**
 * infinite_add- to add two numbers together
 * @n1: first integer
 * @n2: second integer
 * @r: result of adding integer
 * @size_r: size of buffer holding the result
 * Return: returns a character
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j;
	unsigned long int x, o, p;
	int m, s, l = 0, t;

	x = 0;
	o = 0;
	p = 0;

	for (i = 0; n1[i] != '\0'; i++)
	{
		o = (o * 10) + (n1[i] - '0');
	}
	for (j = 0; n2[j] != '\0'; j++)
	{
		p = (p * 10) + (n2[i] - '0');
	}
	x = o + p;
	t = x;
	while (t != 0)
	{
		l++;
		t = t / 10;
	}
	for (m = 0; m < l; m++)
	{
		s = x % 10;
		x = x / 10;
		r[l - (m + 1)] = s + '0';
	}
	r[l] = '\0';
	if (size_r < l)
	{
		return (0);
	}
	else
		return (r);
}

