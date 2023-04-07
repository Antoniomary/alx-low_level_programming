#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: the number of arguments entered to run the program
 * @argv: a pointer to the strings in argc.
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
