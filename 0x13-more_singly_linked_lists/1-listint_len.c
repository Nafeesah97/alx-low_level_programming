#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: struct
 * Returns: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 1;
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
