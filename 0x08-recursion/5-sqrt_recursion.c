#include "main.h"
int indirect_sqrt_recursion(int n, int sqroot);
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: the number to find its square root.
 * Return: -1 if n does not have a natural square root, else
 * the resultant value of the square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (indirect_sqrt_recursion(n, 0));
}
/**
 * indirect_sqrt_recursion - a funtion that helps to find
 * the natural sqrt root of a given number.
 * @n: the given number.
 * @sqroot: the number to be tested as the sqrt root of n.
 * Return: -1 if unsuccessful or sqroot (success).
 */
int indirect_sqrt_recursion(int n, int sqroot)
{
	if (sqroot * sqroot == n)
		return (sqroot);
	if (sqroot * sqroot > n)
		return (-1);
	sqroot++;
	return (indirect_sqrt_recursion(n, sqroot));
}
