#include "main.h"
/**
 * print_numbers - It prints number 0 - 9 followed by a new line
 *Return: void
 */
void print_numbers(void)
{
	int n;

	n = 48;
	while (n <= 57)
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
