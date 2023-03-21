#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: It is the decimal of an ascii code character
 * Return: 1 if number is greater than 0 or
 * 0 if number is zero or
 * -1 if number is leas than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);

	}
	_putchar('\n');
}
