#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: the size to allocate.
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = NULL;

	ptr = malloc(b);
	if (!ptr)
		exit(98);

	return (ptr);
}
