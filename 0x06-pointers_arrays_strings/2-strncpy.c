#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: where string is to be copied to
 * @src: string to be copied
 * @n: number of times to be copied to
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, l = 0;
	char *temp = dest;

	while (src[i++])
	{
		l++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = l; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (temp);
}
