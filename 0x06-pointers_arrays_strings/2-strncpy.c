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
	int i;
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
