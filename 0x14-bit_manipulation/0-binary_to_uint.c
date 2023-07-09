#include "main.h"

/**
 * _pow - exponential function
 * @base: multiply by base
 * @i: integer to be raise
 * Return:res
 */

unsigned int _pow(unsigned int base, unsigned int i)
{
	if (i == 0)
		return (1);
	return (base * _pow(base, i-1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: result / 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res, i, j, p, bit;

	res = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
		i++;

	for (j = 0; j < i; j++)
	{
		if (b[j] != '0' && b[j] != '1')
			return (0);
		p = i - j - 1;
		bit = b[j] - '0';
		res += bit * _pow(2, p);
	}
	return  (res);
}
