#include "main.h"
/**
 * set_bit- it set the value of a bit at a given
 * index to 1
 * @n: bit to set
 * @index: index at which to set it
 * Return: 1 if it is successful, returns -1 if it fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{

	*n |= (1 << index);
	return (1);
}
