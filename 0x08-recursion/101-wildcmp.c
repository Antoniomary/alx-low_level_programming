#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 1 if s1 and s2 can be considered identical, else 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s1 != *s2 && *s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	return (0);
}
