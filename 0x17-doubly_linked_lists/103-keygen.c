#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - a program that generates and prints passwords for an executable.
 * @ac: The number of arguments supplied to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int i, temp, len = strlen(av[1]);
	char password[7], *codex;

	codex = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	password[0] = codex[(len ^ 59) & 63];

	for (temp = i = 0; i < len; i++)
		temp += av[1][i];
	password[1] = codex[(temp ^ 79) & 63];

	for (temp = 1, i = 0; i < len; i++)
		temp *= argv[1][i];
	password[2] = codex[(temp ^ 85) & 63];

	for (temp = i = 0; i < len; i++)
		if (av[1][i] > temp)
			temp = av[1][i];

	srand(temp ^ 14);
	password[3] = codex[rand() & 63];

	for (temp = i = 0; i < len; i++)
		temp += (av[1][i] * av[1][i]);
	password[4] = codex[(temp ^ 239) & 63];

	for (i = 0; i < av[1][0]; i++)
		temp = rand();
	password[5] = codex[(temp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
