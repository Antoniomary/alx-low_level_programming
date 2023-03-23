#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: the number of '_' lines to be printed.
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
