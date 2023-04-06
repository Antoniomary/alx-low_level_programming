#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: the given number to find its factorial.
 * Return: -1 if n is less than 0
 * 1 if n is 0
 * > 1 if n is greater than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
