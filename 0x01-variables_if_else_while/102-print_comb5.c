#include <stdio.h>
/**
 * main - entry point
 * It prints the lowest possibility of 2 two digits
 * from 00 01 to 98 99.
 * Return: Always 0 (success)
 */
int main(void)
{
	int n1, f_d, l_d;

	int n2, f_d2, l_d2;

	n1 = 0;
	while (n1 <= 98)
	{
		f_d = (n1 / 10 + '0');
		l_d = (n1 % 10 + '0');
		n2 = 0;
		while (n2 <= 99)
		{
			f_d2 = (n2 / 10 + '0');
			l_d2 = (n2 % 10 + '0');
			if (n1 < n2)
			{
				putchar(f_d);
				putchar(l_d);
				putchar(' ');
				putchar(f_d2);
				putchar(l_d2);
				if (n1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
