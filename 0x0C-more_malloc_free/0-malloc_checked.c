#include "main.h"
#include<stdlib.h>
/**
 * malloc_checked - it allocates memory using malloc.
 * @b: the size of memory to be allocated.
 * Return:  a pointer to the allocated memory (success) else
 * 98 (failure)
 */
void *malloc_checked(unsigned int b)
{
	void *new_block;

	new_block = malloc(b);

	if (new_block == NULL)
		exit(98);

	return (new_block);
}
