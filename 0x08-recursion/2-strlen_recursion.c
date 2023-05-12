#include "main.h"

/**
 * _strlen_recursion - calculate length of  string
 * @s: string to be counted
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i;

	if (*s == '\0')
		return (0);
	s++;
	i = _strlen_recursion(s) + 1;
	return (i);
}
