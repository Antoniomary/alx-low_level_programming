#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a
 * given index.
 * @n: decimal value to represent in binary.
 * @index: the index, starting from 0 of the bit you want to get.
 *
 * Return: the value of the bit at index index or -1 if an
 * error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bin[64] = {0};
	int i;
	long int new = 0;
	unsigned long int bit;

	while (new <= index)
	{
		new++;
		if (new > 63)
			return (-1);
	}

	for (i = 0; n != 0; i++)
	{
		bit = n % 2;
		n /= 2;
		bin[i] = bit;
	}

	return (bin[index]);
}
