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

	if (head == NULL || *head == NULL)
		return (-1);
	temp = *head;
	j = 0;
	while (temp != NULL)
	{
		j++;
		temp = temp->next;
	}
	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(ptr);
		return (1);
	}
	if (index >= j)
		return (-1);
	temp = *head;
	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	ptr = temp->next;
	temp->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = temp;
	free(ptr);
	return (1);
}
