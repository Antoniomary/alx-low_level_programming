#include "main.h"

/**
 * main - entry point
 * @argc: the number of command line arguments 
 * @argv: a vector of the command line arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", *argv);

	return (0);
}
