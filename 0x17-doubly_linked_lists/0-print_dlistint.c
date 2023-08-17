#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: node to be printed
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
