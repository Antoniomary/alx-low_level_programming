#include "main.h"
/**
 * print_array - prints n elements of an array of
 * integers, then new line.
 *@a: pointer to array
 *@b: number in an array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	if (i == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
