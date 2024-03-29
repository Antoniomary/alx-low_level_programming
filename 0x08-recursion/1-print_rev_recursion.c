#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string to print.
 */

void _print_rev_recursion(char *s)
{
	if (s)
	{
		if (*s == '\0') /* base condition to end recursion */
			return;

		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
