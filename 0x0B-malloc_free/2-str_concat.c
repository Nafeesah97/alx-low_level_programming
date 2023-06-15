#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _len - find length of a string
 * @s: string
 * Return: length
 */

int _len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: sFirst string
 * @s2: Second string
 * Return: A joined sting or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *s;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _len(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _len(s2);
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	i = 0;
	j = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < (len1 + len2))
	{
		if (i < len1)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[j];
			j++;
		}
		i++;
	}
	s[i] = '\0';
	return (s);
}
