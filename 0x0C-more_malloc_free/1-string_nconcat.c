#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * string_nconcat - it concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * @n: the number of bytes to concatenate from s2 to s1.
 * Return: pointer to concatenated string with null zero
 * (success), else NULL (failure).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_s1, len_s2;
	char *concat_s1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* calls function _strlen to gets s1 & s2 length */
	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	/**
	 * checks that what is to be copied is not greater
	 * than what we want to copy
	 */
	if (n >= len_s2)
		n = len_s2;

	/* dynamically allocating memory to concat_s1 */
	concat_s1 = malloc(sizeof(char) * (len_s1 + n + 1));
	if (concat_s1 == NULL)
		return (NULL);

	/* concatenating s1 and s2 into concat_s1 */
	for (i = 0; s1[i] != '\0'; i++)
		concat_s1[i] = s1[i];
	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
		concat_s1[i] = s2[j];
		i++;
	}
	concat_s1[i] = '\0';

	return (concat_s1);
}
/**
 * _strlen - it gives the length of a string.
 * @s: pointer to the string to be counted.
 * Return: the length of s.
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	return (count);
}
