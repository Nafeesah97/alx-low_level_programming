#include "main.h"

/**
 * print_square - a function that prints a square
 *
 * size is the size of square to be printe
 */

void print_square(int size)
{
	int x, i;

	x = 0;

	if (size > 0)
	{
		while (x < size)
		{
			i = 0;

			while (i < size)
			{
				_putchar('#');
				i++;
			}
			_putchar('\n');
			x++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
