#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning
 * @head: head of the node
 * @n: data to insert
 * Return: address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);

	if (*head == NULL)
	{
		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		temp->n = n;
		temp->next = *head;
		temp->prev = NULL;
		(*head)->prev = temp;
		*head = temp;
	}

	return (*head);
}
