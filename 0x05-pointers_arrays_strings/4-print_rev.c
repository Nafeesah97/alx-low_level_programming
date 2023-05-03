#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * @str: the string to be printed in reverse
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	i++;
	return(i);
}

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
