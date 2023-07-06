#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: node
 * @n: integer to be added
 * Return: number of elements
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *temp;

	temp = *head;

	p = malloc(sizeof(listint_t));
	p->n = n;
	p->next = NULL;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = p;

	return (temp);
}
