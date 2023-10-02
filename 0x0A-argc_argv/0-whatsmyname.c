#include "main.h"

/**
 * main - a program that prints its name then a new line.
 * @argc: the number of command line arguments
 * @argv: a vector of the command line arguments
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", *argv);

	return (0);
}
