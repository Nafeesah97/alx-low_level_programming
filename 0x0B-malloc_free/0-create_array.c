#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * create_array -  creates an array of chars
 * @size: number of bytes
 * @c: character to be created
 * Return: character value
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';
	return (str);
}
