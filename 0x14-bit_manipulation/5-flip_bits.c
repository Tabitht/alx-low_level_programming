#include "main.h"
/**
 * flip_bits- returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number to be flipped
 * @m: number to get flipped to
 * Return: the number of vits that needs to beflipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flips = 0, t1, t2;
	while (n > 0 || m > 0)
	{
		t1 = (n & 1);
		t2 = (m & 1);
		if (t1 != t2)
			flips++;
		n = n >> 1;
		m = m >> 1;
	}
	return (flips);
}
