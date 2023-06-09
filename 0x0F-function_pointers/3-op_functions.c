#include "3-calc.h"

/**
 * op_add - gives the sum of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gives the difference of two integers, a and b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - gives the product of two integers, a and b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - gives the result of division of integer a by b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the result of a divided by b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives the remainder of division of integer a by b.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: the remainder of a divided by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
