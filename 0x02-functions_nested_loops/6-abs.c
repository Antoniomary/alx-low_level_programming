#include "main.h"
/**
 * _abs - It computes the absolute value of an integer.
 * @j: It is the integer whose absolute value we want
 * Return: Always 0 (success)
 */
int _abs(int j)
{
	if (j >= 0)
	{
		return (j);
	}
	else
	{
		return (j * -1);
	}
	_putchar('\n');
}
