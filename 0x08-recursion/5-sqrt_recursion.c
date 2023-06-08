#include "main.h"

/**
 * _root - to find root of a number
 * @n: number to find root
 * @i: guessing number
 * Return: result
 */

int _root(int n, int i)
{
	int y;

	y = i * i;

	if (y > n)
		return (-1);
	if (y == n)
		return (i);
	return (_root(n, i + 1));
}

/**
 *  _sqrt_recursion - returns the natural square root of a number
 *  @n: number to find square root
 *  Return: result
 */

int _sqrt_recursion(int n)
{
	return (_root(n, 1));
}
