#include "main.h"
/**
  *  _isalpha- to check for alphabetic characters
  * @c: number to be checked
  *
  * Return: to return 1 or 0
  */
int _isalpha(int c)
{
if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
{
	return (1);
}
else
{
	return (0);
}
}
