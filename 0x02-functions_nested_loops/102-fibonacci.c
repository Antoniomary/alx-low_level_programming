#include <stdio.h>
/**
 * main - It prints the first 50 Fibonacci digits at 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int z = 0;
	long int x = 0, y  = 1, n;

	while (z < 50)
	{
		n = x + y;
		x = y;
		y = n;
		printf("%lu", n);

		if (z < 49)
		{
			printf(", ");
		}
		z++;
	}
	putchar('\n');
	return (0);
}
