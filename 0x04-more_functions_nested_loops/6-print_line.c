#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: the number of times the line is printed
 */

void print_line(int n)
{
	if (n > 0)
	{
		int x;

		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
