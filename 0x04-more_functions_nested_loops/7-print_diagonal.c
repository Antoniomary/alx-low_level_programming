#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number of times the character \ is to be printed.
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int o, p, q;

		for (o = 1; o <= n; o++)
		{
			for (p = 0; p <= (o - 1); p++)
			{
				_putchar(' ');
			}
			for (q = 0; q <= (o - p); q++)
			{
				_putchar(92);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
