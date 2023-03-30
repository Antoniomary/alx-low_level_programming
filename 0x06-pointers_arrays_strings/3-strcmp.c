#include "main.h"
/**
 * _strcmp - it compares two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: n
 */
int _strcmp(char *s1, char *s2)
{
	int n, i;

	n = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] < s2[i])
			{
				n = -15;
				break;
			}
			else if (s1[i] > s2[i])
			{
				n = 15;
				break;
			}
		}
	}
	return (n);
}
