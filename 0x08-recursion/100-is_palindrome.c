#include "main.h"

char *strend(char *s);
int check_index(char *l, char *r);

/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: string to check.
 *
 * Return: 1 if a string is a palindrome, 0 if not.
 */

int is_palindrome(char *s)
{
	char *ptr = NULL;

	if (*s == '\0')
		return (1);

	ptr = strend(s);

	return (check_index(s, ptr - 1));
}

/**
 * strend - return end of a string.
 * @s: the string.
 *
 * Return: end of s i.e the null byte.
 */
char *strend(char *s)
{
	return ((*s == '\0') ? s : strend(s + 1));
}

/**
 * check_index - checks if a string is palindrome.
 * @l: index on the left.
 * @r: index on the right.
 *
 * Return: 0 if char on l and r mismatched else 1 since no mismatch anywhere.
 */
int check_index(char *l, char *r)
{
	if (l >= r) /* base condition to end recursion */
		return (1);

	/**
	 * first part : indicates that the characters are noy the same.
	 * second part : recursive step since they are the same.
	 */
	return ((*l != *r) ? 0 : check_index(l + 1, r - 1));
}
