#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that adds positive numbers.
 * @argc: the number of arguments entered to run the program
 * @argv: a pointer to the strings in argc.
 * Return: 0 (success), else 1 (error)
 */
int main(int argc, char *argv[])
{
	int i, add;

	add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if ((*argv[i] >= 'a' && *argv[i] <= 'z') ||
		(*argv[i] >= 'A' && *argv[i] <= 'Z'))
		{
			printf("Error\n");
			return (1);
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
