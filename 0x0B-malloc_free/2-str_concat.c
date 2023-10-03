#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to newly allocated space with contents of s1 and s2
 * on success, else NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *new = NULL;

	/* treat NULL as empty strings */
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	/* get length of s1 and s2 */
	for (len1 = 0; s1[len1]; ++len1)
		;
	for (len2 = 0; s2[len2]; ++len2)
		;

	/* allocate space to hold s1 and s2 combined */
	new = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (new) /* copy if new is  it NULL */
	{
		for (len1 = 0; *s1; ++s1)
			new[len1++] = *s1;
		while ((new[len1++] = *s2++) != '\0')
			;
	}

	return (new);
}
