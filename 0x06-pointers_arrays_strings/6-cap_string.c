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
		if (c[i] == ' ' || c[i] == '\t' ||
		c[i] == '\n' || c[i] == ',' ||
		c[i] == ';' || c[i] == '.' ||
		c[i] == '!' || c[i] == '?' ||
		c[i] == '"' || c[i] == '(' ||
		c[i] == ')' || c[i] == '{' ||
		c[i] == '}')
		{
			while (c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				c[i + 1] -= 32;
			}
		}
		i++;
	}
	return (c);
}
