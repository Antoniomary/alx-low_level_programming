#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: the string to be checked for a particular character.
 * @c: the character to be checked for in the string s.
 * Return: s
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
