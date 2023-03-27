#include "main.h"
/**
 * rev_string - it reverses a string.
 * @s: the string to bs reversed.
 * Return: void
 */
void rev_string(char *s)
{
	int count, slen;
	int n, m, i, temp;

	count = 0;
	for (slen = 0; s[slen] != '\0'; slen++)
	{
		count++;
	}
	m = count - 1;
	n = m;
	for (i = 0; i <= n / 2; i++)
	{
		temp = s[i];
		s[i] = s[n - i];
		s[n - i] = temp;
	}
}
