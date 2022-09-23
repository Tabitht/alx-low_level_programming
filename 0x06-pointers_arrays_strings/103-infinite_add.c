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
	int i = 0, j = 0, k, l = 0, f, s, d = 0;

<<<<<<< HEAD
	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		l = i;
=======
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
>>>>>>> 78819e6019d42645cea51e4601372183ac6d4769
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1; k >= 0; k--)
	{
		i--;
		j--;
		if (i >= 0)
			f = n1[i] - '0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}

