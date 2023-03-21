#include "main.h"
/**
 * _isalpha - checks for alphabetic characters.
 * @c: It is the character to be checked in the ascii code
 * Return: 1 if character is an Alphabet or 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 89))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
