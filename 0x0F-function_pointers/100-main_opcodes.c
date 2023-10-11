#include "function_pointers.h"
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function.
 * @ac: number of arguments at command line.
 * @av: pointer to the arguments in command line.
 *
 * Usage: ./main number_of_bytes
 * Return: 0 (Success) else 1 or 2 (Error).
 */
int main(int ac, char **av)
{
	int i, n_bytes;
	char *arr;

	if (ac != 2)
		return (printf("Error\n"), 1);

	n_bytes = atoi(av[1]);
	if (n_bytes < 0)
		return (printf("Error\n"), 2);

	arr = (char *) main;
	for (i = 0; i < n_bytes; ++i)
		printf("%02hhx%c", arr[i], i == n_bytes - 1 ? '\n' : ' ');

	return (0);
}
