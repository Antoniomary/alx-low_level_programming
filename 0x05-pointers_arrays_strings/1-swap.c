#include "main.h"
/**
 * swap_int - it swaps the values of two integers.
 * @*a: first pointer of a variable.
 * @a: the first integer value to be swapped with b
 * @b: the second integer value to be swapped with a
 * @*b: second pointer of another variable.
 *Return: void
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
