#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: the decimal number to become binary.
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	int bit;
	unsigned long int mask;

	mask = 4294967296;

	if (n == 0 || n == 1)
	{
		_putchar(n + '0');
		return;
	}

	for ( ; mask != 0; mask >>= 1)
	{
		bit = mask & n ? 1 : 0;
		if (bit == 1)
			flag = 1;
		if (flag)
			_putchar(bit + '0');
	}
}
