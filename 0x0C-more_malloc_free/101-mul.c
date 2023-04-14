#include "main.h"
#include <stdlib.h>

void err_msg(void);
int _isdigit(int c);
int _strlen(char *s);
/**
 * main - a program that multiplies two positive numbers.
 * usage: ./<programName> <number1> <number2>
 * NB:base 10 numbers only.
 * @argc: count of arguments passed at command line.
 * @argv: the string of argc.
 * Return: 0 (success) else 98 (failure).
 */
int main(int argc, char **argv)
{
	int i, j, L1, L2, L_res, num1, num2, res_num, *mul;

	if (argc != 3)
	{
		err_msg();
		exit(98);
	}
	for (i = 1; i < argc; i++)
		for (j = 0; *(*(argv + i) + j); j++)
			if (!_isdigit(*(*(argv + i) + j)))
			{
				err_msg();
				exit(98);
			}

	L1 = _strlen(*(argv + 1)), L2 = _strlen(*(argv + 2));
	L_res = L1 + L2;
	mul = calloc(L_res, sizeof(int));
	if (mul == NULL)
		return (96);

	for (i = L1 - 1; i >= 0; i--)
	{
		num1 = *(*(argv + 1) + i) - '0';
		res_num = 0;
		for (j = L2 - 1; j >= 0; j--)
		{
			num2 = *(*(argv + 2) + j) - '0';
			res_num = *(mul + i + j + 1) + (num1 * num2);
			*(mul + i + j + 1) = res_num % 10;
			*(mul + i + j) += res_num / 10;
		}
	}
	for (i = 0; i < L_res - 1 && !*(mul + i); )
		i++;
	for ( ; i < L_res; i++)
		_putchar(*(mul + i) + '0');
	_putchar('\n');
	free(mul);

	return (0);
}


/**
 * err_msg - it prints error to stdout.
 * Return: void
 */
void err_msg(void)
{
	int i;
	char error[] = "Error\n";

	for (i = 0; error[i] != '\0'; i++)
		_putchar(error[i]);
}

/**
 * _isdigit - it identifies digits 0 to 9.
 * @c: character to be checked if it is a digit.
 * Return: 1 if c is a digit, else 0.
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - it tells the length of a string.
 * @s: the string to check its length.
 * Return: the length of s
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; *(s + i); i++)
		count++;

	return (count);
}
