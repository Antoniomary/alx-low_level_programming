#include "main.h"

int word_counter(char *s);
int _isspace(int c);
char **_free(char **grid, int row);

/**
 * strtow - a function that splits a string into words.
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words) on success, NULL on failure
 */
char **strtow(char *str)
{
	int i = 0, j, k = 0, l, words;
	char **s = NULL;

	if (!str || *str == '\0')
		return (s);

	words = word_counter(str); /* counts words in str */
	if (words == 0)
		return (NULL);

	/* allocate row for each word */
	s = (char **) malloc(sizeof(char *) * (words + 1)); /* extra 1 for NULL */
	if (s) /* allocation success, s is not NULL */
	{
		while (str[i])
		{
			if (!_isspace(str[i])) /* find 1st letter of any word */
			{
				/* get the length of the word in j */
				for (j = 0; str[i] && !_isspace(str[i]); ++j, ++i)
					;

				/* allocate space for current word */
				s[k] = (char *) malloc(sizeof(char) * (j + 1));
				if (!s[k]) /* allocation failure */
					return (_free(s, i));

				for (l = 0; l < j; ++l) /* copy word to new space */
					s[k][l] = str[i - j + l];
				s[k++][l] = '\0'; /* terminate with null byte */
			}
			else
				++i;
		}
		s[k] = NULL; /* terminate 2D array row with NULL */
	}

	return (s);
}

/**
 * word_counter - a function that counts the number of words in a string
 * @s: the string to check
 *
 * Return: the number of words in s
 */
int word_counter(char *s)
{
	int i, looking_for_word = 1, words = 0;

	for (i = 0; s[i]; ++i)
		if (s[i] == ' ')
			looking_for_word = 1;
		else if (looking_for_word == 1)
		{
			words++;
			looking_for_word = 0;
		}

	return (words);
}

/**
 * _isspace - a function that checks if a character is a space
 * @c: the character to check
 *
 * Return: 1 if c is space, 0 if not
 */
int _isspace(int c)
{
	return (c == ' ');
}

/**
 * _free - a function that frees a 2 dimensional grid.
 * @grid: 2D array to free.
 * @row: the number of rows
 *
 * Return: always NULL
 */
char **_free(char **grid, int row)
{
	int i;

	for (i = 0; i < row; ++i)
		free(grid[i]);

	free(grid);

	return (NULL);
}
