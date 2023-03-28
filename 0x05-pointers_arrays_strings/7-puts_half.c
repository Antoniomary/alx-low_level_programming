#include "main.h"
/**
 * puts_half - prints half of a string then a new line.
 * If odd, print last n characters of the string, where
 *  n = (length_of_the_string - 1) / 2.
 * @str: the string whose half is to be printed.
 * Return: void
 */
void puts_half(char *str)
{
	int n, count;
	int a; 

	n = 0;
	count = 0;
	while (str[n] != '\0')
	{
		count++;
		n++;
	}
	if (count % 2 == 0)
	{
		a = count / 2;
		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
	}
	else
	{
		a = (count -1) / 2;
		while (str[a] != '\0')
		{
			_putchar(str[a]);
			a++;
		}
	}
	_putchar('\n');
}
