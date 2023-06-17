#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - a function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *p;
	int r;

	if (min > max)
		return (NULL);
	r = max - min;

	p = malloc(sizeof(int) * (r + 1));
	if (p == NULL)
		return (NULL);
	return (p);
}
