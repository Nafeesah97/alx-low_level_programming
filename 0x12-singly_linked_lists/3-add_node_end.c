#include "lists.h"

/**
 * add_node_end  - adds a new node at the end of a list_t list.
 * @head: node
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *p;

	if (str == NULL)
		return (NULL);

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	temp->next = NULL;

	if (temp-> str == NULL)
	{
		free(temp);
		return (NULL);
	}
	
	if (*head == NULL)
	{
		temp = *head;
	}
	else
	{
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}
	return (temp);
}
