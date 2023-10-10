#include "dog.h"

char *_strdup(const char *s);

/**
 * new_dog - a function that creates a new dog.
 * @name: name of new dog.
 * @age: age of new dog.
 * @owner: owner of new dog.
 *
 * Return: struct of a new dog (success), NULL (failure).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = NULL;

	if (!name || !owner)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (new)
	{
		new->name = _strdup(name);
		if (!new->name)
		{
			free(new);
			return (NULL);
		}
		new->age = age;
		new->owner = _strdup(owner);
		if (!new->owner)
		{
			free(new->name), free(new);
			return (NULL);
		}
	}

	return (new);
}

/**
 * _strdup - a functions that makes duplicate of a string.
 * @s: string to duplicate.
 *
 * Return: duplicate of s (success), NULL (failure).
 */
char *_strdup(const char *s)
{
	int len;
	char *str = NULL;

	/* get length of s */
	for (len = 0; s[len]; ++len)
		;

	/* allocate space for s */
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (str) /* mallos success, str is not NULL */
		for (len = 0; (str[len] = s[len]) != '\0'; ++len)
			;/* copy s to str */

	return (str);
}
