#include "main.h"
/**
  *  _isalpha- to check for alphabetic characters
  *
  *
  * Return- to return 1 if it is an alphabet else it returns 0
  */
int _isalpha(int c)
{
	int c;
if (((c >= 65) || (c <= 90)) && ((c >= 97) || (c <= 122)))
	_putchar('1');

	else
	_putchar('0');

	return (1);
}
