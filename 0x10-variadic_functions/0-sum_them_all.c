#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: the number of integers to sum up.
 *
 * Return: the sum (success) else 0 if n is zero.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, num, sum = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	/**
	 * iterates through the arguments represented by ...
	 * then sums it each one at a time
	 */
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}

	va_end(args);

	return (sum);
}
