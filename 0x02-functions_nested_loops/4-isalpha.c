#include "main.h"
/**
  *  _isalpha- to check for alphabetic characters
  * @c- number to be checked
  *
  * Return- to return 1 if it is an alphabet else it returns 0
  */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) && ((c >= 'A') && (c <= 'Z')))
	_putchar('1');

	else
	_putchar('0');

	return (c);
}
