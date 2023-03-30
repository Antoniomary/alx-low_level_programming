#include "main.h"
/**
 * cap_string - capitalizes all words of a string.
 * @c: the strings to be considered for uppercasing.
 * Return: c (successful capitilized)
 */
char *cap_string(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '\n' || c[i] == '\t' ||
		c[i] == ' ' || c[i] == ',' ||
		c[i] == ';' || c[i] == '.' ||
		c[i] == '!' || c[i] == '?' ||
		c[i] == '"' || c[i] == '(' ||
		c[i] == ')' || c[i] == '{' ||
		c[i] == '}')
		{
			if (c[i + 1] != '\0' && c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] -= 32;
			}
		}
		i++;
	}
	return (c);
}
