#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a
 * given index
 * @n: pointer to the decimal value to alter in binary.
 * @index: the index, starting from 0 of the bit you want to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int i;
	long int new = 0;
	char bin[64];
	unsigned long int dec_val = 0, base = 1;

	while (new <= index)
	{
		new++;
		if (new > 63)
			return (-1);
	}

	for (i = 63; i >= 0; i--)
	{
		bin[i] = (*n % 2) + '0';
		*n /= 2;
	}

	index = 63 - index;
	bin[index] = '0';

	for (i = 63; i >= 0; i--)
	{
		if (bin[i] == '1')
			dec_val += base;
		base *= 2;
	}

	*n = dec_val;

	return (1);
}
