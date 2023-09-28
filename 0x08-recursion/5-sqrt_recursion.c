#include "main.h"

int _sqrt(int n, int num);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find square root of.
 *
 * Return: natural square root of n else -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 1 || n == 0)
		return (n);

	return (_sqrt(n, 2));
}

/**
 * _sqrt - checks if a number is the sqrt of a given number.
 * @n: the given number.
 * @num: the number to check as the sqrt of n.
 *
 * Return: if n has no natural sqrt, -1 else the natural sqrt.
 */
int _sqrt(int n, int num)
{
	if (num * num == n)
		return (num);
	else if (num * num > n)
		return (-1);

	return (_sqrt(n, num + 1));
}

