#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of characters to copy from s2.
 *
 * Return: a pointer to newly allocated space (success), else NULL (failure)
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len, i;
	char *new = NULL;

	/* turn NULL pointers to empty strings */
	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	/* get length of s1 */
	for (len = 0; s1[len]; ++len)
		;

	new = (char *) malloc(sizeof(char) * (len + n + 1));
	if (new) /* allocation success, s is not NULL */
	{
		/* copy s1 to new */
		for (len = 0; s1[len]; ++len)
			new[len] = s1[len];

		/* concatenate s2 to new */
		for (i = 0; s2[i] && i < n; ++i)
			new[len + i] = s2[i];

		new[len + i] = '\0'; /* end with null byte */
	}

	return (new);
}
