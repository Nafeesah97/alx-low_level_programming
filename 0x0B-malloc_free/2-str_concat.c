#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: sFirst string
 * @s2: Second string
 * Return: A joined sting or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *s;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	len1 = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}

	len2 = 0;
	i = 0;
	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}

	s = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	i = 0;
	if (s == NULL)
	{
		return (NULL);
	}
	while (s2[i] != '\0' )
	{
		s1[len1] = s2[i];
		i++;
		len1++;
	}
	i = 0;
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	s[i] = '\0';
	return (s);
}
