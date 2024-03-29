#include "main.h"

/**
 * main - a program that adds positive numbers.
 * @argc: the number of command line arguments
 * @argv: a vector of the command line arguments
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char **argv)
{
	int i, j, result = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; argv[i]; ++i)
		{
			for (j = 0; argv[i][j]; ++j)
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}

			result += atoi(argv[i]);
		}

		printf("%d\n", result);
	}

	return (0);
}
