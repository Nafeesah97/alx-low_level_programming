#include "lists.h"

/**
 * dlistint_len - returns the number of elements
 * @h: node
 * Return: length of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;

	if (h == NULL)
		return (0);

	i = 1;
	while (h->next != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
