#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string to be checked for a particular character.
 * @c: the character to be checked for in the string s.
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}