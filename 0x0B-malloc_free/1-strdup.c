#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _strdup - duplicate string
 * @str: string to be duplicated
 * Return: Null or string
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *s;

	len = 1;
	while (str++)
	{
		len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	s = malloc((sizeof(char) * len) + 1);
	while ( i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (0);
}
