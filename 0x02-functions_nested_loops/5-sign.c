#include "main.h"

/**
 * print_sign -  a function that prints the sign of a number
 *
 * Return: 1, 0,and -1
 *
 * @n: the integer the program checks
 */

int print_sign(int n)
{
	if (n > '0')
	{
		return (1);
		_putchar('+');
	}
	else if (n = '0')
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
