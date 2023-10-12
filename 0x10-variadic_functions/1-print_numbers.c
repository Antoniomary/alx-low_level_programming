#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arg;

	if (n)
	{
		separator = !separator ? "" : separator;
		va_start(arg, n);
		for (i = 0; i < n; ++i)
			printf("%s%d", i ? separator : "", va_arg(arg, int));

		va_end(arg);
	}
	printf("\n");
}
