#include "main.h"

int _strlen(const char *s);
int is_all_digit(const char *s);

/**
 * main - a program that multiplies two positive numbers.
 * @ac: argument count at command line.
 * @av: an array of arrays.
 *
 * Return: 0 (success), 98 (failure).
 */
int main(int ac, char **av)
{
	int i = 5, j, k, n, d1, d2, l1, l2, ret = 98, carry = 0;
	char *ptr = NULL, *num1, *num2, *result = "rorrE";

	if (ac == 3)
		if (is_all_digit(av[1]) && is_all_digit(av[2]))
		{
			/* get length of av[0] and av[1] */
			l1 = _strlen(av[1]), l2 = _strlen(av[2]);
			/* allocate space for the product of num1 and num2 */
			ptr = (char *) malloc(sizeof(char) * (l1 + l2));
			if (ptr) /* malloc success, ptr is not NULL */
			{
				/* get the number with the more digit */
				if (l1 >= l2)
					num1 = av[1], num2 = av[2];
				else /* l2 > l1 */
					num1 = av[2], num2 = av[1], n = l1, l1 = l2, l2 = n;

				/* fill result with zeros */
				for (result = ptr, i = 0; i < l1 + l2; ++i)
					result[i] = '0';

				for (i = 0; --l2 >= 0; ++i, carry = 0)
				{
					/* d2 holds the rightmost digit of num2 in turns */
					d2 = num2[l2] - '0';
					for (k = i, j = l1 - 1; j >= 0; --j)
					{
						/* d1 holds the rightmost digit of num1 in turn */
						d1 = num1[j] - '0';
						/* n holds product of d1 & d2, +  sum of carry and value in result[k] */
						n = (d1 * d2) + carry + (result[k] - '0');
						/* store the rightmost value of n */
						result[k++] = n  % 10 + '0';
						/* carry the left digit forward */
						carry = n / 10;
					}
					if (carry != 0) /* no number to operate with carry so it is left alone */
						result[k++] = carry + '0';
				}
				i = k, ret = 0;
			}
		}

	for (--i; i >= 0; --i)
		_putchar(result[i]);
	_putchar('\n');

	free(ptr);

	return (ret);
}

/**
 * _strlen - gets the length of a string.
 * @s: the string to find length of.
 *
 * Return: length of s.
 */
int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; ++i)
		;

	return (i);
}

/**
 * is_all_digit - checks if a string is made up of only digits.
 * @s: the string to check.
 *
 * Return: 1 if all id digit, 0 if not.
 */
int is_all_digit(const char *s)
{
	int i;

	for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
		;

	return (s[i] == '\0');
}
