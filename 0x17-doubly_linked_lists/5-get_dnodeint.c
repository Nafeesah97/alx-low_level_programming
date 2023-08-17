#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node
 * @head: node to be checked
 * @index: location
 * Return: nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i, j;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	j = 1;
	while (temp != NULL)
	{
		temp = temp->next;
		j++;
	}

	if (index > j)
	{
		return (NULL);
	}
	else
	{
		temp = head;
		for (i = 0; i < index; i++)
		{
			temp = temp->next;
		}
		return (temp);
	}
}
