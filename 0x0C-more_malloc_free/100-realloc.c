#include "main.h"
#include <stdlib.h>
/**
 * _realloc - it reallocates a memory block using malloc and free.
 * @ptr: the memory block to be considered for reallocation.
 * @old_size: the current memory size of ptr.
 * @new_size: the memory size to be reallocated in memory.
 * Return: pointer to newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_ptr, *temp;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* allocates new_size to a new memory block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* copies the data from ptr to new_ptr */
	temp = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = temp[i];
	}
	else
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = temp[i];
	}

	free(ptr);

	return (new_ptr);
}
