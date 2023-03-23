#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: it is the size of the square.
 * Return: void
 */
void print_square(int size)
{
	if (size > 0)
	{
		int n, m;

		for (n = 1; n <= size; n++)
		{
			for (m = 1; m <= size; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
