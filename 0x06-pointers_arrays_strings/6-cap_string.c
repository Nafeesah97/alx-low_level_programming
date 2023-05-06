#include "main.h"

/**
 * cap_string -  a function that capitalizes all words of a string
 * @str: string to be capitalize
 * Return: character
 */

char *cap_string(char *str)
{
	int i = 0;
	char  s[] = {' ', ',', ';', '.', '!', '?', '"', '(', ')', '{',
		'}', '\0'};

	while (*str)
	{
		if ((*(str + i)  == *(s + i)) || (*(str + i) == '\t')
				|| (*(str + i) == '\n') || (*(str + i) == '.'))
		{
			if (*(str + i + 1) >= 'a' && *(str + i + 1) <= 'z')
			{
				*(str + i + 1) -= 32;
			}
		}
		str++;
	}
	return (str);
}
