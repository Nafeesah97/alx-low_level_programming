#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * alloc_grid - a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of thegrid
 * Return: memory allocated
 */

int **alloc_grid(int width, int height)
{
	int **p, i, n;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(int *) * height);
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			for (n = 0; n < i; n++)
			{
				free(p[n]);
			}
			free(p);
			return (NULL);
		}
	}
	return (p);
}
