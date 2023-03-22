#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to
 * 98, followed by a new line.
 * @n: the start point to count up to 98
 * Return: Always void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else if (n == 98)
	{
		printf("%d", 98);
	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
}
