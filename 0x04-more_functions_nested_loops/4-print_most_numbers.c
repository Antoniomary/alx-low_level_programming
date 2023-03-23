#include "main.h"
/**
 * print_most_numbers - It prints number 0 - 9 but 2 & 4
 * followed by a new line
 * Return: void
 */
void print_most_numbers(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		if (n == 50 || n == 52)
		{
			n++;
			continue;
		}
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
