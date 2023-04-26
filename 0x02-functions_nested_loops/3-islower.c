#include <ctype.h>
#include "main.h"

/**
 * _islower -  a function that checks for lowercase character
 *
 * Return: 1 for true and 0 for false
 */

int _islower(int c)
{	
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
