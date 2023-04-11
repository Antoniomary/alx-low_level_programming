#include "main.h"
#include <stdlib.h>
int _str_len(char *strsize);
/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: a pointer containing s1 and s2 (success), else 0
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j;
	unsigned int length = _str_len(s1);
	unsigned int length2 = _str_len(s2);
	char *cat = (char *) malloc((length + length2 + 1) * sizeof(char));

	if (cat == NULL)
		return (0);
	if (s1 == NULL && s2 == NULL)
		return (0);
	if (s1 == NULL)
		return (s2);
	if (s2 == NULL)
		return (s1);
	for (i = 0; s1[i] != '\0'; i++)
	{
		cat[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		cat[i] = s2[j];
		i++;
	}
	cat[i] = '\0';
	s1 = cat;
	return (s1);
}
/**
 * _str_len - gets the length of a string.
 * @strsize: pointer to string we want to find its length.
 * Return: length of strsize.
 */
int _str_len(char *strsize)
{
	int len = 0, i;

	for (i = 0; strsize[i] != '\0' ; i++)
	{
		len++;
	}
	return (len);
}
