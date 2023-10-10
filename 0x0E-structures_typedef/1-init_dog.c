#include "dog.h"

/**
 * init_dog - a function that initializes a variable of type struct dog.
 * @d: struct dog variable to initialize.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: tne owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
	{
		d = malloc(sizeof(struct dog));
		if (!d)
			exit(0);
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
