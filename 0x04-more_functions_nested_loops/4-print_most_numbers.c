#include "main.h"

/**
 *  print_most_numbers - a function that prints the numbers, from 0 to 9
 *  except 2 and 4
 *  i is the integers printed
 */

void print_most_numbers(void)
{
	int i;

	for (i >= '0' && i <= '9')
	{
		while (i == '2' || i == '4')
		{
			continue;
			i++;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
