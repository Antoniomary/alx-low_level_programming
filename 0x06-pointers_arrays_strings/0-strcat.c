#include "main.h"
/**
 * _strcat - It concatenates two strings by appending
 * the src string to the dest string, overwriting the
 * terminating null byte (\0) at the end of dest, and
 * then adds a terminating null byte
 * @dest: the first string (destination to receive another string)
 * @src: the second string (to be appended to destination)
 * Return: dest (the first string after appending the second string)
 */
char *_strcat(char *dest, char *src)
{
	int dest_count, i;
	int src_count;

	dest_count = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		dest_count++;
	}
	src_count = 0;
	for (i = 0; src[i] != '\0'; i++)
	{
		src_count++;
	}
	for (i = 0; i <= src[src_count + 1]; i++)
	{
		dest[dest_count + i] = src[i];
	}
	return (dest);
}
