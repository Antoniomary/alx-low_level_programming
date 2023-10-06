#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: the old memory block.
 * @old_size: size of ptr.
 * @new_size: size to allocate for the new block of memory.
 *
 * Return: pointer to new memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i;
	char *new = NULL;

	if (!ptr)
		return (malloc(sizeof(char) * new_size));

	if (!new_size)
		return (free(ptr), NULL);

	if (new_size > old_size)
	{
		new = (char *) malloc(sizeof(char) * new_size);
		if (!new)
			return (NULL);

		for (i = 0; (new[i] = ((char *) ptr)[i]) != '\0'; ++i)
			;
		free(ptr);
		ptr = new;
	}

	return (ptr);
}
