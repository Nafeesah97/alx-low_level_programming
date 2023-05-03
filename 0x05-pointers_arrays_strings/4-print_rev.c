#include "main.h"

/**
 * _strlen - a function to  know the length of string
 * Return: length of string
 * @s: string which length is to be determined
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	i++;
	return (i);
}

/**
 * print_rev - a function that prints a string, in reverse
 * @s: length of string
 */

void print_rev(char *s)
{
	int l = _strlen(s);
	int i;

	for ((i = (l - 1)); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
