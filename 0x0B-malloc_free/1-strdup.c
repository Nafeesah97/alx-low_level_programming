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


	if (str == NULL)
	{
		return (NULL);
	}

	len = 1;
	i = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	s = (char*)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < len)
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
