#include <ctype.h>
#include "main.h"

/**
 * _isupper - a function that checks for uppercase
 *
 * Return: 1 for true and 0 for false
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
