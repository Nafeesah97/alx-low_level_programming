#include "main.h"

/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * integer to be printed
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
