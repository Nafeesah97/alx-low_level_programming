#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: Array of integers to be checked
 * @size: size of array
 * @cmp: function pointer
 * Return: the index of value in array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i,c;

	if (size <= 0)
		return (-1);
	c = 0;
	if (array != NULL || cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			c = (*cmp)(array[i]);
			if (c != 0)
				return (i);
		}
	}
	return (-1);
}
