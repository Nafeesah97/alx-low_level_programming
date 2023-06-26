#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: integers to be sum
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int res;
	unsigned int i;
	va_list sum;

	if (n == 0)
		return (0);

	res = 0;

	va_start(sum, n);

	for (i = 0; i < n; i++)
	{
		res += va_arg(sum, int);
	}

	va_end(sum);
	return (res);
}
