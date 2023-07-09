#include "main.h"

/**
 * _pow - exponential function
 * @2: multiply by 2
 * @i: integer to be raise
 * Return:res
 */

unsigned int _pow(unsigned int base, unsigned int i)
{
	if (i == 0)
		return (1);
	if (i > 0)
		return (base * _pow(base, i-1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 * Return: result / 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res, i;

	res = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res += atoi(b[i]) * _pow(2, i);
		i++;
	}
	return  (res);
}
