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
		return (1);
	}
	else
	{
		return (0);
	}

}
