#include "main.h"

/**
 * _strdup - a  function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: the string to copy.
 *
 * Return: pointer to the duplicated string on success, NULL on failure.
 */

char *_strdup(char *str)
{
	int len;
	char *s = NULL;

	if (!str)
		return (s);

	/* get length of str */
	for (len = 0; str[len]; ++len)
		;

	/* allocate space for new string */
	s = (char *) malloc(sizeof(char) * (len + 1));
	if (s) /* copy if s is not NULL */
		for (len = 0; (s[len] = str[len]); ++len)
			;

	return (s);
}
