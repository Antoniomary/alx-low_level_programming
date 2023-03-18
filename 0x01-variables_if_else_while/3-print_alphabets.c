#include <stdio.h>
/**
 * main - It prints the alphabet letters 'a-zA-Z'.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i;

	i = 0;
	while (i <= 51)
	{
		putchar(alp[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
