#include <stdio.h>
#include <stdlib.h>
int _numOfCoin(int cent);
/**
 * main -  prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: the number of arguments entered to run the program
 * @argv: a pointer to the strings in argc.
 * Return: Alway 0 (success) or 1 (error).
 */
int main(int argc, char *argv[])
{
	int cent, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cent = atoi(argv[1]);
	if (cent <= 0)
		printf("0\n");
	else
	{
		n = _numOfCoin(cent);
		printf("%d\n", n);
	}
	return (0);
}
/**
 * _numOfCoin - calculates the number of coin to give.
 * @cent: the cents to give as change.
 * Return: the number of coin.
 */
int _numOfCoin(int cent)
{
	int numOfCoin = 0, i;

	if (cent >= 25)
	{
		for (i = 0; cent >= 0; i++)
		{
			cent -= 25;
			numOfCoin++;
			if (cent == 0 || cent < 25)
				break;
		}
	}
	if (cent >= 10)
	{
		for (i = 0; cent >= 0; i++)
		{
			cent -= 10;
			numOfCoin++;
			if (cent == 0 || cent < 10)
				break;
		}
	}
	if (cent >= 5)
	{
		for (i = 0; cent >= 0; i++)
		{
			cent -= 5;
			numOfCoin++;
			if (cent == 0 || cent < 5)
				break;
		}
	}
	if (cent >= 2)
	{
		for (i = 0; cent >= 0; i++)
		{
			cent -= 2;
			numOfCoin++;
			if (cent == 0 || cent < 2)
				break;
		}
	}
	if (cent == 1)
		numOfCoin++;
	return (numOfCoin);
}
