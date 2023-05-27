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

	len = 0;
	while (str++)
	{
		len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	s = (char*)malloc((sizeof(char) * len) + 1);
	if (s == NULL)
	{
		return (NULL);
	}

	while ( i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
