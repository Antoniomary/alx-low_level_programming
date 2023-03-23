#include "main.h"
/**
 * print_triangle - prints a triangle then by a new line.
 * @size: It is the size of the triangle.
 * Return: void
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int m, n, o;

		for (m = 0; m < size; m++)
		{
			for (n = 1; n < (size - m); n++)
			{
				_putchar(' ');
			}
			for (o = 0; o <= m; o++)
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
