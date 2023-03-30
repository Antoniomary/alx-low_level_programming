#include "main.h"
/**
 * _strncpy - copies a given number of string
 * @dest: the first string i.e destination to copy to
 * @src: the second string i.e source to copy from
 * @n: the number of array of string to copy to dest
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
