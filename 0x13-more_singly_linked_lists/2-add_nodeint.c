#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: struct
 * @n:intto be added
 * Return: number of elements
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p, *temp;

	temp->n = n;
	temp->next = NULL;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p = temp;
	
	while (p->n != '\0')
	{
		p->next = *head;
		head = head->next;
	}
	return (p);
}
