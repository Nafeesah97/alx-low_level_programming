#include "lists.h"

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: node to add something to
 * @idx: location
 * @n: number to be added
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i, j;
	dlistint_t *ptr, *temp;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	j = 1;
	temp = *h;
	while (temp != NULL)
	{
		j++;
		temp = temp->next;
	}
	if (idx > j)
	{
		free(ptr);
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	if (idx == 0)
	{
		if (*h != NULL)
			(*h)->prev = ptr;
		ptr->next = *h;
		*h = ptr;
		return (ptr);
	}
	temp = *h;
	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}
	ptr->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = ptr;
	temp->next = ptr;
	ptr->prev = temp;
	return (ptr);
}
