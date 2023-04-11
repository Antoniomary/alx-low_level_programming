#include "main.h"
#include <stdio.h>
#include <stdlib.h>
int _str_len(char *strsize);
/**
 * _strdup - it returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter.
 * @str: a pointer to a string.
 * Return: the pointer str (success) else 0.
 */
char *_strdup(char *str)
{
	int i, size;
	char *string;

	if (str == NULL)
		return (0);
	size = _str_len(str);
	string = (char *) malloc(size * sizeof(char));
	if (string == NULL)
		return (0);
	for (i = 0; i < size; i++)
	{
		string[i] = str[i];
	}
	return (string);
}

/**
 * _str_len - gets the length of a string.
 * @strsize: pointer to the string we want length
 * Return: the length of the string.
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
