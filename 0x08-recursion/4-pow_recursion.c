#include "main.h"
/**
 * _pow_recursion - a function that returns the value of x
 * raised to the power of y.
 * @x: the number to be multiplied y times.
 * @y: the number of times x is to be multiplied.
 * Return: -1 if y is less than 0
 * 1 if y is equal to zero
 * the resultant integer from x**y (success)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
