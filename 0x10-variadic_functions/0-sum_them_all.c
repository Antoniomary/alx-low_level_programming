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
	unsigned int i, sum = 0;
	va_list arg;

	if (n)
	{
		va_start(arg, n);
		for (i = 0; i < n; ++i)
			sum += va_arg(arg, int);

		va_end(arg);
	}

	return (sum);
}
