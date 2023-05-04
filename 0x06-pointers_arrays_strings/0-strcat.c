#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * Return: a ponter to the resulting string
 * @dest: string to be concacenated
 * @src: string to be concacenated
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (temp);
}
