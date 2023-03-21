#include "main.h"
/**
 * print_alphabet - It prints the small alphabets
 * followed by a new line
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
	int s_alp;

	s_alp = 97;
	while (s_alp < 123)
	{
		_putchar(s_alp);
		s_alp++;
	}
	_putchar('\n');
}
