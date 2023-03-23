#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * followed by a new line.
 * Return: void
 */
void more_numbers(void)
{
	char num[] = "01234567891011121314";
	int t;
	int n;

	t = 1;
	while (t <= 10)
	{
		n = 0;
		while (n <= 19)
		{
			_putchar(num[n]);
			n++;
		}
		_putchar('\n');
		t++;
	}
}
