#include <stdio.h>
/**
 * main - Prints base 10 numbers from 0-9.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
