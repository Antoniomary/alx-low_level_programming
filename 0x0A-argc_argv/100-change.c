#include "main.h"

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: the number of command line arguments
 * @argv: a vector of the command line arguments
 *
 * Return: 0 (success), 1 (error)
 */
int main(int argc, char **argv)
{
	int i, cents, min = 0;
	int coins[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents > 0)
		for (i = 0; i < 5; ++i)
		{
			if (coins[i] > cents)
				continue;

			min += cents / coins[i];
			cents %= coins[i];
		}

	printf("%d\n", min);

	return (0);
}
