#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the given number to find its factorial.
 *
 * Return: factorial of n if n is a positive number else -1.
 */

int factorial(int n)
{
	if (n < 0) /* not a valid number to find factorial of */
		return (-1);

	/**
	 * first part - base condition to stop recursion
	 * second part - recursive step
	 */
	return ((n == 0) ? 1 : (n * factorial(n - 1)));
}
