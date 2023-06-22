#include "function_pointers.h"

/**
 * array_iterator- executes a function given as a parameter on elementof array
 * @array: the array of numbers
 * @size: size of array
 * @action: action to be taken
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
