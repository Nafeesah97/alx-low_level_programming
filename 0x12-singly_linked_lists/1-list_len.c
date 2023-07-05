#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: list to be counted
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 1;
	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
