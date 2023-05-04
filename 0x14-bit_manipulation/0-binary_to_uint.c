#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to
 * an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number, or 0 if:
 * there is one or more chars in the string b that is not 0 or 1;
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j;
	unsigned int dec_val = 0, base = 1;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '1' || b[i] == '0')
		{
			i++;
			continue;
		}

		return (0);
	}

	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] == '1')
			dec_val += base;
		base *= 2;
	}

	return (dec_val);
}
