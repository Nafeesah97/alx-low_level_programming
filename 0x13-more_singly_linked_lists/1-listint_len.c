#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: struct
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	i = 1;
	while (h->next != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
