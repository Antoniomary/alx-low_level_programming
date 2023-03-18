#include <stdio.h>
/**
 * main - Prints the base 16 numbers 0 - f.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[] = "0123456789abcdef";

	int i;

	i = 0;
	while (i <= 15)
	{
		putchar(alp[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
