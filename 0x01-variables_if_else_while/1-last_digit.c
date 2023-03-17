#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - It tells if a number is 0, greater than 5, or less than 6
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is ", n);

	ld = n % 10;

	if (ld == 0)
	{
		printf("%d and is 0\n", ld);
	}
	else if (ld > 5)
	{
		printf("%d and is greater than 5\n", ld);
	}
	else if (ld < 6 && ld != 0)
	{
		printf("%d and is less than 6 and not 0\n", ld);
	}
	return (0);
}
