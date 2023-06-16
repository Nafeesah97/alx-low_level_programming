#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: number of bytes
 * Return: addresss to memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
