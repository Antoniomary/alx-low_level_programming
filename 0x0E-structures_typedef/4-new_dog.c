#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that function that creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the name(dog).
 * @owner: the owner of name(dog).
 * Return: a pointer to new_dog (success) else 0 (failure).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	/* dynamically allocating memory to *d */
	d = malloc(sizeof(dog_t));
	/* checks if memory was allocated or not */
	if (d == NULL)
		return (0);

	/* initializing d */
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

	return (d);
}
