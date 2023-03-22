#include "main.h"
/**
 * jack_bauer - It prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 * Return: Always nothing  (success)
 */
void jack_bauer(void)
{
	int h1, h2, m, s;

	h1 = 0;
	while (h1 < 3)
	{
	h2 = 0;
	while (h2 < 4)
	{
		m = 0;
	while (m < 6)
	{
		s = 0;
	while (s <= 9)
	{
		_putchar(h1 + '0');
		_putchar(h2 + '0');
		_putchar(':');
		_putchar(m + '0');
		_putchar(s + '0');
		if (h2 + h1 + m + s != 19)
		{
			_putchar('\n');
		}
	s++;
	}
	m++;
	}
	h2++;
	}
	h1++;
	}
	_putchar('\n');
}
