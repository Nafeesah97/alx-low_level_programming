#include "main.h"

/**
 * _strlen - a function to determine length of string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	i++;
	return (i);
}

/**
 * rev_string - a function that reverses a string.
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int l = _strlen(s);
	int i;

	for ((i = (l - 1)); i >= l / 2; i--)
	{
		char t = s[i];

		s[i] = s[l - i - 1];
		s[l - i - 1] = t;
	}
}
