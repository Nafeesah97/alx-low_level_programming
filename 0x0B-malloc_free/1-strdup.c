#include <stdlib.h>
#include <stddef.h>
#include "main.h"

/**
 * _len - length of string
 * @s: string
 * Return: length of string
 */

int _len(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strdup - duplicate string
 * @str: string to be duplicated
 * Return: Null or string
 */

char *_strdup(char *str)
{
	unsigned int i, len;
	char *s;

	len = _len(str);
	if (str == NULL || len == 0)
	{
		return (NULL);
	}
	i =0;
	s = malloc((sizeof(char) * len) + 1);
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	free(s);
	return (0);
}
