#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: the sreing to be reversed
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	char temp;

	for (i = n - 1; i >=  n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = *(a + i);
		*(a + i) = temp;
	}
}
