#include <stdio.h>
#include "main.h"

/**
 *  more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *  i is the integer to be printed
 */

void more_numbers(void)
{
	int i,n;

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
