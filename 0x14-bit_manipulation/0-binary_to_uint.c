#include "main.h"

/**
 * binary_to_uint - a function that converts binary number to unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the converted number else 0 if b is NULL or has chars beside 1 or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0, pow = 1;

	if (b)
	{
		/* get length of b */
		for (i = 0; b[i]; ++i)
			/* check for non-binary chars */
			if (b[i] != '0' && b[i] != '1')
				return (result);

		for (--i; i >= 0; --i)
		{
			/* work with on bits */
			if (b[i] == '1')
				result += pow;

			/* raise power by 2 each time */
			pow *= 2;
		}
	}

	return (result);
}
