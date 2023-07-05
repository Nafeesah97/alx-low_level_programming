#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: where to add
 * @str: string to be added
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	struct list_s *p;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(struct list_s));
	p->str = strdup(str);
	p->next = NULL;

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	P->next = *head;
	*head = p;
	return (p);
}
