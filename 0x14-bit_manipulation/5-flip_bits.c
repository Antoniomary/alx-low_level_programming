#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: the first number.
 * @m: the second number.
 *
 * Return: the number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int count;

	for (count = 0; x != 0; x >>= 1)
		if (x & 1)
			++count;

	return (count);
}
