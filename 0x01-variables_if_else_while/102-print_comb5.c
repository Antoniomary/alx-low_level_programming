#include <stdio.h>
/**
 * main - entry point
 * It prints the lowest possibility of 2 two digits
 * from 00 01 to 98 99.
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, d, e, f;

	e = 0;
	while (e < 10)
	{
		d = 0;
	while (d < 9)
	{
		c = 0;
	while (c < 10)
	{
		f = 0;
	while (f < 10)
	{
		if ((e + d) < (c + f) && (e + d) != (c + f) && c >= e && f >= d)
	{
		putchar('0' + e);
		putchar('0' + d);
		putchar(' ');
		putchar('0' + c);
		putchar('0' + f);
		if (e + d + c + f != 35)
		{
		putchar(',');
		putchar(' ');
		}
	}
	f++;
	}
	c++;
	}
	d++;
	}
	e++;
	}
	putchar('\n');
	return (0);
}
