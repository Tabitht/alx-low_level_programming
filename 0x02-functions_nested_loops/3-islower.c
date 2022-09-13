#include "main.h"
/**
  * _islower- to check for lower case letters
  * int c- it checks if the integer inputed is lowercase in ascii
  *
  * Return- to return 1 if true else will return 0
  */
int _islower(int c)
{
if ((c >= 97) && (c <= 122))
{
	_putchar('1');
}
	else
{
	_putchar('0');
}
	return (c);
}

