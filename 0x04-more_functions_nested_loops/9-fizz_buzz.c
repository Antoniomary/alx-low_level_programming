#include <stdio.h>
/**
 * main - it prints numbers 1 to 100 followed by a new line.
 * For multiples of three, it prints Fizz not the number,
 * for multiples of five, it prints Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		if (n < 100)
		{
			putchar(' ');
		}
	n++;
	}
	putchar('\n');
	return (0);
}
