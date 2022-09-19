#include "main.h"
/**
 * _atoi- converts a string to an integer
 * @s: string to be tested
 *
 * Return: it returns an integer
 */
int _atoi(char *s)
{
	int m, n;
	unsigned int o;

	m = 1;
	n = 0;
	o = 0;
	while (!(s[n] <= '9' && s[n] >= '0') && s[n] != '\0')
	{
		if(s[n] == '-')
		{
			m *= -1;
			n++;
		}
	}
	while (s[n] <= '9' && s[n] >= '0' && s[n] != '\0')
	{
		o = (o * 10) + (s[n] - '0');
		n++;
	}
	o *= m;
	return (o);
}
