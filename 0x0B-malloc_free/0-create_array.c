#include "main.h"

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: the size of array to create
 * @c: the character to fill array
 *
 * Return: pointer to the created array on success, NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr = NULL;

	if (!size)
		return (ptr);

	ptr = (char *) malloc(sizeof(char) * size);
	if (ptr) /* means allocation success and ptr not equal to NULL */
		for (i = 0; i < size; ++i)
			ptr[i] = c;

	return (ptr);
}
