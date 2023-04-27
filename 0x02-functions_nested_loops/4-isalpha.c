#include <ctype.h>
#include "main.h"

/**
 *  _isalpha - a function that checks for alphabetic character
 *
 *  Return: 1 for true and 0 for false
 *
 *  @c: the integer that the program checks
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
