#include "main.h"
/**
  * _islower- to check for lower case letters
  * @c: letter being tested
  *
  * Return: to return 1 if true else will return 0
  */
int _islower(int c)
{
if ((c >= 'a') && (c <= 'z'))
{
	return (1);
}
else
{
	return (0);
}
}

