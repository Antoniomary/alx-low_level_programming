#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
	char *words;
	int i = 0, arg_num = _strlen(format);
	va_list args;

	va_start(args, format);

	while (i < arg_num)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				words = va_arg(args, char *);
				if (words == NULL)
					words = "nil";
				printf("%s", words);
				break;
			default:
				i++;
				continue;
		}
		if (i != arg_num - 1)
			printf(", ");
		i++;
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
