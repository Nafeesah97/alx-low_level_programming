#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * @array:  pointer to the first element of the array to search in
 * @size:  number of elements in array
 * @value:  value to search for
 * Return: return the index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t l, r, m, i;

	if (array == NULL)
		return (-1);

	l = 0;
	r = size - 1;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		m = l + ((r - l) / 2);

		if (array[m] == value)
			return (m);

		if (array[m] <  value)
		{
			l = m + 1;
		}
		else
		{
			r = m - 1;
		}
	}

	return (-1);
}

