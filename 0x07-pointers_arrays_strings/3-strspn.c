#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: the string to be checked
 * @accept: bytes to be checked for in s.
 * Return: numByte
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int numByte;
	int i, j;

	numByte = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				numByte++;
				break;
			}
			else if (accept[j + 1] == '\0')
			{
				return (numByte);
			}
			j++;
		}
	}
	return (numByte);
}
