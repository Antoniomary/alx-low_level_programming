#include "main.h"
/**
 * _puts - prints a string, then a new line, to stdout.
 * @str: the string to be printed to stdout.
 * Return: void
 */
void _puts(char *str)
{
	int n;
	int i = 0;

	n = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		n++;
	}
	_putchar('\n');
}
