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
	size_t l;
	const char *rep;

	if (str == NULL)
		return (NULL);
	rep = str;
	l = 0;
	while (*rep != '\0')
	{
		l++;
		rep++;
	}

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = l;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = temp;
	}
	return (temp);
}
