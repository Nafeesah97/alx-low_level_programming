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

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	len1 = _len(s1);
	len2 = _len(s2);
	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
