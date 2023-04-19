#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function that prints a name.
 * @name: the name to be printed.
 * @f: a function pointer.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		exit(EXIT_SUCCESS);

	f(name);
}
