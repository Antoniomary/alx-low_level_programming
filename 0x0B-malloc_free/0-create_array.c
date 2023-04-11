#include "main.h"
#include <stdlib.h>
/**
 * create_array -  creates an array of chars, and
 * initializes it with a specific character.
 * @size: the number of elements the array can take.
 * @c: the character to fill the array.
 * Return: c (success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = (char *) malloc(size * sizeof(char));

	if (size == i)
		return (0);
	else if (arr == NULL)
		return (0);
	{
		for (i = 0; i < size; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
