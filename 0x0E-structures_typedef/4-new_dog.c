#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - a function that function that creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the name(dog).
 * @owner: the owner of name(dog).
 * Return: a pointer to new_dog (success) else 0 (failure).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len, owner_len;
	dog_t *d;

	/* dynamically allocating memory to *d */
	d = malloc(sizeof(dog_t));
	/* checks if memory was allocated or not */
	if (d == NULL)
		return (0);

	/* gets the length of parameter name and owner */
	name_len = _strlen(name);
	owner_len = _strlen(owner);

	/* dynamically allocating memory to objects of d */
	(*d).name = malloc(sizeof(char) * (name_len + 1));
	(*d).owner = malloc(sizeof(char) * (owner_len + 1));
	/* checks if memory was allocated or not */
	if ((*d).name == NULL)
	{
		free(d);
		return (0);
	}
	if ((*d).owner == NULL)
	{
		free(d);
		free((*d).name);
		return (0);
	}

	/* initializing d */
	 _strcpy((*d).name, name);
	(*d).age = age;
	_strcpy((*d).owner, owner);

	return (d);
}

/**
 * _strlen - finds the length of a string.
 * @s: the string whose length is to be found.
 * Return: the length of s.
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (length);
}

/**
 * _strcpy - copies a string.
 * @dest: where to copy to.
 * @src: where to copy from.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	j = _strlen(src);

	for (i = 0; i < j; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
