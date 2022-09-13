#include "main.h"
/**
  * _abs- to print the absolute values of numbers
  * @r- integer to be tested
  *
  * Return- to always return 0
  */
int _abs(int r)
{
if (r < '0')
{
	return (r * -1);
}
if (r == '0')
{
	return (0);
}
if (r > '1')
{
	return(r);
}
	_putchar('\n');

}
