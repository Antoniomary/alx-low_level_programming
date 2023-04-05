#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum
 * of the two diagonals of a square matrix of integers.
 * @a: the pointer to the array.
 * @size: the number of index, rows and columns.
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int index, sum1, sum2;

	sum1 = 0;
	for (index = 0; index < size; index++)
	{
		sum1 += a[index * size + index];
	}
	sum2 = 0;
	for (index = size - 1; index >= 0; index--)
	{
		sum2 += a[index * size + (size - index - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
