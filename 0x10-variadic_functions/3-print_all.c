#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Formats and their specifiers include:
 * c: char
 * i: integer
 * f: float
 * s: char *
 */
void print_all(const char * const format, ...)
{
	char *words, *s = "";
	int i = 0;
	va_list arg;

	if (format)
	{
		va_start(arg, format);
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", s, va_arg(arg, int));
				break;
			case 'i':
				printf("%s%d", s, va_arg(arg, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(arg, double));
				break;
			case 's':
				words = va_arg(arg, char *);
				if (!words)
					words = "(nil)";
				printf("%s%s", s, words);
				break;
			}
			++i, s = ", ";
		}
		va_end(arg);
	}
	printf("\n");
}
