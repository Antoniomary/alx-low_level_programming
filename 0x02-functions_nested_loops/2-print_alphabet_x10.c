#include "main.h"
/**
 * print_alphabet_x10 - It prints the small alphabets
 * followed by a new line ten times.
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int s_alp;
	int n;

	n = 1;
	while (n <= 10)
	{
		s_alp = 97;
		while (s_alp < 123)
		{
			_putchar(s_alp);
			s_alp++;
		}
		_putchar('\n');
		n++;
	}
}
