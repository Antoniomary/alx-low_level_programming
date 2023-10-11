#include "3-calc.h"

/**
 * main - a program that performs simple arithmetic operations.
 * @ac: The number of arguments given at command line.
 * @av: pointer to the strings in the command line.
 *
 * Usage: ./calc num1 operator num2 e.g ./calc 3 + 2
 * Return: 0 (success) else 98 or 99 or100 (Error).
 */
int main(int ac, char *av[])
{
	int num1, num2, (*calc)(int, int);
	char *op;

	if (ac != 4)
		return (printf("Error\n"), 98);

	op = av[2], calc = get_op_func(op);
	if (*(op + 1) != '\0' || !calc)
		return (printf("Error\n"), 99);

	num1 = atoi(av[1]), num2 = atoi(av[3]);
	if (num2 == 0 && (*op == '/' || *op == '%'))
		return (printf("Error\n"), 100);

	printf("%d\n", calc(num1, num2));

	return (0);
}
