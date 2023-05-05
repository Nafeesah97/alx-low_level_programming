#include "main.h"

/**
 *  _strcmp - a function that compares two strings.
 *  @s1: string to be compared
 *  @s2: string to be compared
 *  Return: -1, 1 or 0 if successful
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1)
	{
		if (*s1 != *s2)
			break;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
