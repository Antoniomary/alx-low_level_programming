#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - a  function that executes a function given
 * as a parameter on each element of an array.
 * @array: pointer to the array to be iterated.
 * @size: the size of the array.
 * @action:  is a pointer to the function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size <= 0 || action == NULL)
		exit(EXIT_SUCCESS);

	for (i = 0; i < size; i++)
		action(array[i]);
}
