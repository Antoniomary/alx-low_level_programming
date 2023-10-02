#include "main.h"

/**
 * main - a program that multiplies two numbers.
 * @argc: the number of command line arguments
 * @argv: a vector of the command line arguments
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char **argv)
{
	int a, b, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	result = a * b;
	printf("%d\n", result);

	return (0);
}
