#include <stdio.h>
/**
 * main - Prints the small alphabet letters reversed 'z' to 'a'.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[] = "zyxwvutsrqponmlkjihgfedcba";

	int i;

	i = 0;
	while (i <= 25)
	{
		putchar(alp[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
