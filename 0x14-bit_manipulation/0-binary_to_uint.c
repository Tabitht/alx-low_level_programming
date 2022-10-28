#include "main.h"
/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: binary number to be converted
 * Return: converted number, return 0 if one or
 * more characters of b contains a char that is
 * is not zero or 1, return zero if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, base = 1;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
		;
	i = i - 1;

	while (i >= 0)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec += (b[i] - '0') * base;
		base *= 2;
		i--;
	}
	return (dec);
}
