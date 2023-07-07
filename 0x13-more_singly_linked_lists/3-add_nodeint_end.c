#include "lists.h"

/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list
 * @head: node
 * @n: integer to be added
 * Return: address of new elements
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *temp;


	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = NULL;
	
	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = p;
	}

	return (temp->next);
}
