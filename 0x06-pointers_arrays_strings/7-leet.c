#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @trans: the string to be encoded.
 * Return: trans (the pointer to the string)
 */
char *leet(char *trans)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; trans[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (trans[i] == s1[j])
			{
				trans[i] = s2[j];
			}
		}
	}
	return (trans);
}
