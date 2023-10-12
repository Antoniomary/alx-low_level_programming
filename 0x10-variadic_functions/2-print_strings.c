#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list arg;

	if (n)
	{
		separator = !separator ? "" : separator;
		va_start(arg, n);
		for (i = 0; i < n; i++)
			printf("%s%s", i ? separator : "", (s = va_arg(arg, char *)) ? s : "(nil)");
		va_end(arg);
	}
	printf("\n");
}
