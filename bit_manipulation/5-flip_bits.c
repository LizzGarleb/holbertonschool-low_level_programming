#include "main.h"
/**
 * flip_bits - functions that return the number of bits you would
 * need to flip to get from one number to another.
 *
 * @n: bit values
 * @m: bit values
 *
 * Return: the number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;

	while (n > 0 || m > 0)
	{
		int t1 = (n & 1);
		int t2 = (m & 1);

		if (t1 != t2)
			i++;

		n >>= 1;
		m >>= 1;
	}
	return (i);
}
