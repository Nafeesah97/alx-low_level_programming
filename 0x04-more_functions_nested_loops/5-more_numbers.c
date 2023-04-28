#include <stdio.h>
#include "main.h"

/**
 *  more_numbers - a function that prints 10 times the numbers, from 0 to 14
 *  i is the integer to be printed
 */

void more_numbers(void)
{
	int i = 0, n;

	while (i < 10)
	{
		n = 0;

		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
			}
			_putchar((n % 10) + '0');
			n++;
		}
		_putchar('\n');
		i++;
	}
}
