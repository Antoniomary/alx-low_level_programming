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
	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *nee = needle;
		while (*hay == *nee && *nee != '\0')
		{
			hay++;
			nee++;
		}
		if (*nee == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
