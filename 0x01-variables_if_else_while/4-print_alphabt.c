#include <stdio.h>
/**
 * main - Prints the small alphabet letters 'a-z' minus 'q' and 'e'.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[] = "abcdfghijklmnoprstuvwxyz";

	int i;

	i = 0;
	while (i <= 23)
	{
		putchar(alp[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
