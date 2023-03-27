#include "main.h"
/**
 * print_rev - prints a string, in reverse, then a new line.
 * @s:the string to be printed in reverse.
 * Return: void
 */
void print_rev(char *s)
{
	int count, slen;
	int temp, rev;

	count = 0;
	slen = 0;
	while (s[count] != '\0')
	{
		slen++;
		count++;
	}
	temp = count - 1;
	rev = temp;
	while (rev >= 0)
	{
		_putchar(s[rev]);
		rev--;
	}
	_putchar('\n');
}
