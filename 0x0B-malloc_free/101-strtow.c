#include "main.h"
#include <stdlib.h>
int numOfWords(char *s);
/**
 * strtow - splits a string into words.
 * @str: pointer to the string to be split into words.
 * Return: pointer to an array of strings (words), else NULL
 */
char **strtow(char *str)
{
	char **sort, *temp;
	int i, k = 0, len = 0, c = 0, words, start, end;

	while (*(str + len))
		len++;
	words = numOfWords(str);
	if (words == 0)
		return (NULL);
	sort = (char **) malloc((words + 1) * sizeof(char *));
	if (sort == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				temp = (char *) malloc((c + 1) * sizeof(char));
				if (temp == NULL)
					return (NULL);

				while (start < end)
				*temp++ = str[start++];
				*temp = '\0';
				sort[k] = temp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	sort[k] = NULL;
	return (sort);
}
/**
 * numOfWords - tells the number of words in a string.
 * @s: string to be checked for words.
 * Return: number of words
 */
int numOfWords(char *s)
{
	int flag = 0, a = 0, b;

	for (b = 0; s[b] != '\0'; b++)
	{
		if (s[b] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			a++;
		}
	}

	return (a);
}
