#include "lists.h"

void cool(void) __attribute__((constructor));

/**
 * cool - a function that prints before the main function is executed.
 */
void cool(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
