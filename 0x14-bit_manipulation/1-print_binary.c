#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number.
 * @n: the decimal number to become binary.
 */
void print_binary(unsigned long int n)
{
	int flag = 0;
	int bit, i;
	unsigned long int mask = 1;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		bit = mask & (n >> i) ? 1 : 0;
		if (bit == 1)
			flag = 1;
		if (flag)
			_putchar(bit + '0');
	}
}
