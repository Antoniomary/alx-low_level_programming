#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - a function that initialize a variable of type struct dog.
 * @d: pointer to the object of the structure.
 * @name: the name of the dog.
 * @age: the age of the name(dog).
 * @owner: the owner of name(dog).
 * Return: void.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		/* dynamically allocating memory to *d */
		d = malloc(sizeof(struct dog));
		/* checks if memory was allocated or not */
		if (d == NULL)
			exit(0);
	}

	/* initializing the struct dog that d is pointing to */
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
