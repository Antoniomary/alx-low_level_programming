#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: the array of integers
 * @n: the number of elements of the array
 * Return: voide
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	if (n % 2 == 0)
	{
		n -= 1;
		for (i = 0; i < ((n + 1) / 2); i++)
		{
			temp = a[i];
			a[i] = a[n - i];
			a[n - i] = temp;
		}
	}
	else
	{
		n -= 1;
		for (i = 0; i < (n / 2); i++)
		{
			temp = a[i];
			a[i] = a[n - i];
			a[n - i] = temp;
		}
	}
}
