#include "main.h"
/**
  * add- to add to given numbers together
  * a- first inputed integer to be added
  * b- second inputed integer to be added
  *
  * Return- to return the value of the added sum
  */
int add(int a, int b)
{
	int sum;
	sum = a + b;
	_putchar('0' + sum);

	_putchar('\n');

	return (sum);
}
