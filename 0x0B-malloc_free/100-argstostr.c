#include "main.h"

/**
 * argstostr - a function that concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to a new string (success), or NULL (failure)
 */

char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *s = NULL;

	if (!ac || !av)
		return (s);

	/* get total length of the strings in av */
	for (i = len = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j]; ++j)
			++len;
		len++; /* for the newline character */
	}

	/* allocate space to store new string */
	s = (char *) malloc(sizeof(char) * (len + 1));
	if (s) /* allocation success, s is not NULL */
	{
		for (i = len = 0; i < ac; ++i)
		{
			for (j = 0; av[i][j]; ++j)
				s[len++] = av[i][j]; /* copy to s */
			s[len++] = '\n'; /* add newline at the end of each string */
		}
		s[len] = '\0'; /* terminate with null byte */
	}

	return (s);
}
