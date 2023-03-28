#include "main.h"
/**
 * char *_strcpy - copies the string pointed to by src
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: the destination to copy to
 * @src: the source to copy from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	while (b < a)
	{
		dest[b] = src[b];
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
