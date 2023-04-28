#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line in the terminal
 * @n: the number of times the line is printed
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int x,j;

		for (x = 0; x < n; x++)
		{
			for (j = 0; j < x; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
