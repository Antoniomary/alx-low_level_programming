#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: the pointer to the destination to copy to.
 * @src: the pointer to the source to copy from.
 * @n: the number of bytes to copy.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
