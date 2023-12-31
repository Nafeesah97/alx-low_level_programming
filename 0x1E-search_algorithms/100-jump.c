#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: index or -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t m, i, p, n;

	if (array == NULL)
		return (-1);
	n = sqrt(size);

	m = n;
	p = 0;
	while (array[m - 1] < value)
	{
		printf("Value checked array[%ld] = [%ld]\n", p, p);
		p = m;
		m += n;
		if (p >= size)
			return (-1);
	}
	if (array[m - 1] > value)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", p, m);
		for (i = p; i < m && i < size; i++)
		{
			printf("Value checked array[%ld] = [%ld]\n", i, i);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
