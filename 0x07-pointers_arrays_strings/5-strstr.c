#include "main.h"
/**
 * _strstr - a function that locates a substring.
 * @haystack: pointer to a string.
 * @needle: pointer to a substring.
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	j = 0;
	if (needle == NULL)
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
	if (haystack[i] == needle[j])
	{
	for ( ; needle[j] != '\0'; j++)
	{
		if (needle[j] != haystack[i + j])
		{
			break;
		}
	}
	return (&haystack[i]);
	}
	}
	return (NULL);
}
