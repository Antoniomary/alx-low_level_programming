#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: the base.
 * @y: the exponent.
 *
 * Return: the value of x to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	/**
	 * first part - base condition to stop recursion
	 * second part - recursive step
	 */
	return ((y == 0) ? 1 : (x * _pow_recursion(x, y - 1)));
}
