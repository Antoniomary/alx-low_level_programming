#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @*s: a pointer to variable s which contains the string
 * to be counted.
 * @s: the array variable with the string.
 * Return: lenght
 */
int _strlen(char *s)
{
	int lenght = 0;
	int n;

		for (n = 0; s[n] != '\0'; n++)
		{
			lenght++;
		}
		return (lenght);
}
