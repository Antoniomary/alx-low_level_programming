#include "main.h"

/**
 * _put_recursion - prints a string, followed by a new line using recursion.
 * @s: the string to print
 */

void _puts_recursion(char *s)
{
	if (s)
	{
		if (*s == '\0') /* base condition to end recursion */
		{
			_putchar('\n');
			return ;
		}

		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
