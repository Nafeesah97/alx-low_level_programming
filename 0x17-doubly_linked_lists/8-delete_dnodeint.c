#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: node
 * @index: location
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i, j;
	dlistint_t *temp, *ptr;

	if (head == NULL)
		return (0);
	temp = *head;
	j = 0;
	while (temp != NULL)
	{
		j++;
		temp = temp->next;
	}
	if (idx == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			free(*head);
		}
		else
		{
			*head = NULL;
			free(*head);
		}
		return (0);
	}
	if (index > j)
		return (1);
	temp = *head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	ptr = temp->next;
	temp->next = ptr->next;
	ptr->next->prev = temp;
	free(ptr);
	return (0);
}
