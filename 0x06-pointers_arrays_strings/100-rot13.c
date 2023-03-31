#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: string to be encoded
 * Return: str
 */

char *rot13(char *str)
{
	int i;
	int j;
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rotten[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == original[j])
			{
				str[i] = rotten[j];
				break;
			}
		}
	}
	return (str);
}
