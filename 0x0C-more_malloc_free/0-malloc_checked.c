#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: number of bytes
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	return (p);

	if (p == NULL)
	{
		int val = 98;
		return (val);
	}
}
