#include <stdio.h>
#include <stdlib.h>
/**
 * main - It prints the sum of all the multiples of 3 and
 * 5 in 1024.
 * Return: Always 0 (success)
 */
int main(void)
{
	int m = 0;
	int sum = 0;

	while (m < 1024)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			sum += m;
		}
		m++;
	}
	printf("%i\n", sum);
	return (0);
}
