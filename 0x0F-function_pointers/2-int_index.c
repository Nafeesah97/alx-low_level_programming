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
	int i;


