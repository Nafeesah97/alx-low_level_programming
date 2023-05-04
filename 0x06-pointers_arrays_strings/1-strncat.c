#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenates two strings
 * @dest: string to be joined
 * @src: string to be joined
 * @n: the indexnumber where joining is stopped
 * Return: result of joining
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}

	for  (i = 0; src[i] && i < n; i++)
	{
		*dest++ = src[i];
	}
	return (temp);
}
