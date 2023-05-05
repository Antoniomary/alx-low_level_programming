#include "main.h"

/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: the first decimal value.
 * @m: the second decimal value.
 *
 * Return: number of bits flipped to get from a number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int o, mask = 1;
	char digit;
	int i;
	unsigned int flipped = 0;

	o = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		digit = mask & (o >> i) ? '1' : '0';
		if (digit == '1')
			flipped++;
	}

	return (flipped);
}
