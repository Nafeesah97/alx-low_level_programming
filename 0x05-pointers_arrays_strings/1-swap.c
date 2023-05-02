#include <stdio.h>
#include "main.h"

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: pointer of integer
 * @b: pointer of integer
 */

void swap_int(int *a, int *b)
{
	int m;
	int n;

	m = *a;
	n = *b;

	*a = *b;
	*b = m;
	*a = n;
}
