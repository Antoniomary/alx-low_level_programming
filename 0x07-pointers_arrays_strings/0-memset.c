#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte.
 * @s: a pointer to an array in memory.
 * @b: the character to fill the array already in memory.
 * @n: the number of bytes to be filled.
 * Return: buffer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
