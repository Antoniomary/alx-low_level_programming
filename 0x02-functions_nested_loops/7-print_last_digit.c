#include "main.h"
/**
 * print_last_digit - It prints the last digit of a number.
 * @n: It is the number whose last digit is sought.
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;
	if (ld < 0)
	{
		_putchar(-ld + 48);
		return (-ld);
	}
	else
	{
		_putchar(ld + 48);
		return (ld);
	}
}
