#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a
 * new line.
 * @separator: the string to be printed between the strings.
 * @n: the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	if (separator == NULL)
		separator = "";

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i == n - 1)
			break;
		printf("%s", separator);
	}

	va_end(args);

	printf("\n");
}
