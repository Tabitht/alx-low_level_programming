#include "main.h"
/**
  * _islower- to check for lower case letters
  * @c: it checks if the integer inputed is lowercase in ascii
  *
  * Return- to return 1 if true else will return 0
  */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
	_putchar('1');
}
if ((c !>= 'a') && (c !<= 'z'))
{
	_putchar('0');
}
	_putchar('\n');
	return (c);
}

