#include "main.h"
int is_prime_number_check(int n, int check);
/**
 * is_prime_number - a recursive function that identifies a prime number.
 * @n: the number to be checked.
 * Return: 1 if n is a prime number, else 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_number_check(n, 2));
}
/**
 * is_prime_number_check - a recursive function that
 * identifies a prime number.
 * @n: the number to be checked.
 * @check: the divisor of n.
 * Return: 1 if n is a prime number, else 0.
 */
int is_prime_number_check(int n, int check)
{
	if (n % check == 0 && check < n)
		return (0);
	if (check == n)
		return (1);
	check++;
	return (is_prime_number_check(n, check));
}
