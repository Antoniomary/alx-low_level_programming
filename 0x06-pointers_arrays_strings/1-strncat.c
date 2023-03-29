#include "main.h"
/**
 * _strncat - concatenates two strings by using at
 * most n bytes from src where it does not need to
 * be null-terminated if it contains n or more bytes
 * @dest: the first string which is the destination
 * @src: the second string, the source to be appended to destination
 * @n: the maximum number of strings to concatenate
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_count;
	int i;

	dest_count = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_count++;
	}
	for (i = 0; i < n && src[i] != '\0' ; i++)
	{
		dest[dest_count + i] = src[i];
	}
	dest[dest_count + i] = '\0';
	return (dest);
}
