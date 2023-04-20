#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

int _strlen(const char *s);

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
	int i = 0, arg_num;
	va_list args;

	va_start(args, format);

	if (format)
	{
		arg_num = _strlen(format);

		while (i < arg_num)
		{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", s, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", s, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", s, va_arg(args, double));
				break;
			case 's':
				words = va_arg(args, char *);
				if (words == NULL)
					words = "(nil)";
				printf("%s%s", s, words);
				break;
			default:
				i++;
				continue;
		}
		s = ", ";
		i++;
		}
	}
	va_end(args);

	printf("\n");
}
/**
 * _strlen - gets the length of a string.
 * @s: pointer to the string to find length.
 *
 * Return: length of the string.
 */
int _strlen(const char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);
}
