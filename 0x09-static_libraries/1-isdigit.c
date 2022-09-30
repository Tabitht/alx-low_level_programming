#include "main.h"
/**
 * _isdigit- checks for digits 0-9
 * @c: the operahand to be tested
 *
 * Return: to return 1 if true and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
