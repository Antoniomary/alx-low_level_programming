#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog -  a function that prints a struct dog.
 * @d: pointer to the structure to print.
 * Return: void.
 */
void print_dog(struct dog *d)
{
	/* ensures that d is not null */
	if (d == NULL)
		exit(1);

	/* initializes any null element with (nil) */
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	/* prints to stdout the information in stuct dog */
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
