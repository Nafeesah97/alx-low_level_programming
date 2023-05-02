#include <stdio.h>
#include "main.h"

/**
 *  _strlen - a function that returns the length of a string
 * @s: string whose length is to be determined
 * Return: the length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	i++;
	return (i);
}
