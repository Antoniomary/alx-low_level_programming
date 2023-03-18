#include <stdio.h>
/**
 * main - Prints the base 10 numbers 0-9.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
