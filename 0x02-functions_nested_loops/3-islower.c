#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: It is the character to be checked in tha ascii code
 * Return: 1 if character is lowercase or 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
