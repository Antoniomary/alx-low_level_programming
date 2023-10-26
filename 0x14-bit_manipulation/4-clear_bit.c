#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the number to clear bit.
 * @index: the particular bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= 64)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
