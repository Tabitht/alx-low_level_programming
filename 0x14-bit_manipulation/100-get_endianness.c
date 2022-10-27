#include "main.h"
/**
 * get_endianness- to check endianness
 * Return: 0 for big endian, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (int) *c;
}
