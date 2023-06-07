#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to the power
 * of y
 * @x: integer to be multiplied
 * @y: superscript
 * Return: result
 */

int _pow_recursion(int x, int y)
{
	unsigned int i;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		i = _pow_recursion(x, y - 1) * x;
		y--;
	}
	return (i);
}
