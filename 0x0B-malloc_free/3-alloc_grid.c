#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of thegrid
 * Return: memory allocated
 */

int **alloc_grid(int width, int height)
{
	int **p, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int*) * height);

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
	}
	return (p);
}
