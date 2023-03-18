#include <stdio.h>
/**
 * main - It prints the small alphabet letters 'a' to 'z'.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

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
