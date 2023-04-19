#include "3-calc.h"

/**
 * main - a program that performs simple arithmetic operations.
 * @argc: The number of arguments given at command line.
 * @argv: pointer to the strings in the command line.
 *
 * Usage: ./calc num1 operator num2 e.g ./calc 3 + 2
 * Return: 0 (success) else 98 or 99 or100 (Error).
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(num1, num2));

	return (0);
}
