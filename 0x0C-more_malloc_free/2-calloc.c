#include "main.h"
#include <stdlib.h>
/**
 * _calloc - it allocates memory for an array, using malloc.
 * @nmemb: the number of items to be allocate memory for.
 * @size: the size of byte per item.
 * Return: pointer to the allocated memory (sucess)
 * else NULL (failure).
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memb;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* allocating memory dynamically to memb  */
	memb = malloc(nmemb * size);

	/* check to know if memb was actually allocated */
	if (memb == NULL)
		return (NULL);

	/* initializing all index of memb to 0 */
	for (i = 0; i < (nmemb * size); i++)
		memb[i] = 0;

	return (memb);
}
