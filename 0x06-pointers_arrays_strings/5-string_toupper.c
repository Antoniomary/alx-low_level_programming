#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a
 * string to uppercase.
 * @toupper: string to be changed to uppercase letters.
 * Return: toupper
 */
char *string_toupper(char *toupper)
{
	int i;

	i = 0;
	while (toupper[i] != '\0')
	{
		if (toupper[i] >= 97 && toupper[i] <= 122)
		{
			toupper[i] -= 32;
		}
		i++;
	}
	return (toupper);
}
