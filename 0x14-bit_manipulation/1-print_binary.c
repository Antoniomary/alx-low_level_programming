#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n: the number to represent in binary.
 */
void print_binary(unsigned long int n)
{
	int i;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = 63; i >= 0; --i)
			if (((n >> i) & 1) == 1)
				break;

		for ( ; i >= 0; --i)
			_putchar(((n >> i) & 1) + '0');
	}
}
