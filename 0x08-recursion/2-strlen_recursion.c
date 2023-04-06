#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: a pointer to some string.
 * Return: an integer value.
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		return (n + _strlen_recursion(s + 1));
	}
	else
		return (0);
}
