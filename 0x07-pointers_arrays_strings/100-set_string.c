#include "main.h"
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: double pointer to a pointer.
 * @to: the string to replace the string in s.
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}