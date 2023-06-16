#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _len - length of string
 * @s: string
 * Return: length of string
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
 * string_nconcat -  function that concatenates two strings
 * @s1: First string
 * @s2: second string
 * @n: the nth bytes to beadded to first string
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *s;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _len(s1);
	if (s2 == NULL)
		len2= 0;
	else
		len2 = _len(s2);

	s = malloc(sizeof(char) * (len1 + n + 1));

	if (s == NULL)
		return (NULL);
	
	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	if (n >= len2)
	{
		while (s2[j] != '\0')
		{
			s[i] = s2[j];
			i++;
			j++;
		}
	}
	else
	{
		while (j < n)
		{
			s[i] = s2[j];
			i++;
			j++;
		}
	}
	s[i] = '\0';
	return (s);
}
