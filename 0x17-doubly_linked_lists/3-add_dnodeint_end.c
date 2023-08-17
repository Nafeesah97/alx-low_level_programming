#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end
 * @head: node to add to
 * @n: element to add
 * Return: address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *temp;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;
	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	ptr->prev = temp;

	return (ptr);
}
