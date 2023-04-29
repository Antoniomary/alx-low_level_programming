#include "lists.h"
#include <stdio.h>

int cool(void) __attribute__((constructor));

/**
 * cool - a function that prints before the main function is
 * executed.
 *
 * Return: Alway 0 (success)
 */
int cool(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

	return (0);
}
