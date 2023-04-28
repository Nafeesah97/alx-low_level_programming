#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line in the terminal
 * @n: the number of times the line is printed
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int x;

		for (x = 0; x < n; x++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
