#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character, then a new line.
 * @str: the string to be printed.
 * Return: void
 */
void puts2(char *str)
{
	int n;

	n = 0;
	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
		n++;
	}
	_putchar('\n');
}
