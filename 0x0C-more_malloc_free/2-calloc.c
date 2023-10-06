#include "main.h"

/**
 * _calloc - a function that allocates memory for an array using malloc.
 * @nmemb: the number of element for the array.
 * @size: the size for each element.
 *
 * Return: pointer to newly allocated space(success), NULL (failure).
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr = NULL;
	unsigned int i, product = nmemb * size;

	if (product) /* i.e nmemb or size is not zero */
	{
		ptr = (char *) malloc(product);
		if (ptr) /* allocation success, ptr is not NULL */
			/* poulate with zero */
			for (i = 0; i < product; ++i)
				ptr[i] = 0;
	}

	return (ptr);
}
