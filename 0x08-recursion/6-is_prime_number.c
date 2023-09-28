#include "main.h"

int is_divisible(int n, int num);

/**
 * is_prime_number - checks if an integer is a prime number.
 * @n: the integer to check.
 *
 * Return: 1 if n is a prime number else 0.
 */

int is_prime_number(int n)
{
	if ((n <= 1) || (n % 2 == 0))
		return (0);

	return (is_divisible(n, 3));
}

/**
 * is_divisible - checks if an integer is divisible by another integer.
 * @n: the integer to check.
 * @num: the integer to test if it is a divisor of n.
 *
 * Return: 1 if n is divisible by num else 0.
 */
int is_divisible(int n, int num)
{
	if (num >= n)
		return (1);

	if (n % num == 0)
		return (0);

	return (is_divisible(n, num + 2));
}
