#include "main.h"
#include <string.h>
/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: binary number to be converted
 * Return: converted number, return 0 if one or
 * more characters of b contains a char that is
 * is not zero or 1, return zero if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int j = strlen(b);
	int dec, base = 1,

	if (b == NULL)
		return (0);
	for (j = j - 1; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		dec = (b[j] - '0') * base;
		base *= 2;
	}
	return (dec);




}
