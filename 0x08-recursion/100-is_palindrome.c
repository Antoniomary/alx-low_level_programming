#include "main.h"
int is_palindrome_check(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - a recursive function that identifies
 * a string that is a palindrome.
 * @s: a pointer to a string.
 * Return: 1 if s is a palindrome, else 0.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (is_palindrome_check(s, 0, _strlen_recursion(s)));
}
/**
 * is_palindrome_check - a recursive function that checks
 * if s is a palindrome.
 * @s: string to be checked.
 * @i: counts through the string characters.
 * @l: length of the string.
 * Return: 1 if s is a palindrome, else 0.
 */
int is_palindrome_check(char *s, int i, int l)
{
	if (*(s + i) != *(s + l - 1))
		return (0);
	if (i >= l)
		return (1);
	return (is_palindrome_check(s, i + 1, l - 1));
}
/**
 * _strlen_recursion - tells the length of a string s
 * @s: the string to checked
 * Return: length of the s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
