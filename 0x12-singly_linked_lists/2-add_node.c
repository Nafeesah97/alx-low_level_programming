#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: where to add
 * @str: string to be added
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	struct list_s *p, *h;
	size_t i;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(struct list_s));
	if (p == NULL)
		return (NULL);

	p->str = strdup(str);
	p->next = NULL;

	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}

	p->next = *head;
	*head = p;

	i = 0;
	h = *head;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (p);
}
