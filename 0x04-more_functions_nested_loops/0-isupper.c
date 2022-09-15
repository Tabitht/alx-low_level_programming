#include "main.h"
/**
 * _isupper- prints only uppercase letters
 * @c: the integer to be tested
 *
 * Return: returns 1 for success 0 otherwise
 */
int _isupper(int c)
{
	if ((c <= 'Z') && (c >= 'A'))
	{
		_putchar('1');
	return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
