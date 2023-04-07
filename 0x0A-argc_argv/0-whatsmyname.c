#include <stdio.h>
/**
 * main - prints its name, followed by a new line.
 * @argc: the number of arguments entered to run the program
 * @argv: a pointer to the strings in argc.
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
