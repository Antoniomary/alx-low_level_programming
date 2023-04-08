#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - a program that adds positive numbers.
 * @argc: the number of arguments entered to run the program
 * @argv: a pointer to the strings in argc.
 * Return: 0 (success), else 1 (error)
 */
int main(int argc, char *argv[])
{
	int i, add;
	size_t k;
	char *j;

	add = 0;

	if (argc > 1)
	{
	for (i = 1;  i < argc; i++)
	{
		j = argv[i];
		for (k = 0; k < strlen(j); k++)
		{
			if (j[k] < 48 || j[k] > 57)
			{
				printf("Error\n");
				return (1);
			}
			add += atoi(j);
			j++;
		}
	}
	printf("%d\n", add);
	}
	else
		printf("0\n");
	return (0);
}
