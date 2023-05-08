#include "main.h"

/**
 * _strlen - afunction that determin size of string
 * @str: string whose length is to be determined
 * Return: gives the lenth of string
 */

int _strlen(char *str)
{
	int i = 0;

	while (*str)
		i++;
	return (i);
}

/**
 * _memset- a function that fills memory with a constant byte
 * @s: string to be replaced
 * @b: srting to be replaced with
 * @n: the first byte to be replaced
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	for (index = 0; index < n; index++)
	{
		*(s + index) = b;
	}
	return (s);
}
