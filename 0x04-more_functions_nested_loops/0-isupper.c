#include "main.h"
/**
 * _isupper - checks for uppercase character of c.
 * @c: the character to be checked if uppercase or not.
 * Return: 1 if c is uppercase or 0 if lowercase.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 89)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
