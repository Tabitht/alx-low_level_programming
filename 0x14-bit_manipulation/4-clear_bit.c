#include "main.h"
/**
 * clear_bit- it sets the value of a bit to 0 at a given index
 * @n: bit to set
 * @index: index at which to set it
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);
	return (1);
}
