#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: node
 */

void free_list(list_t *head)
{
	list_t *p;

	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		free(p);
	}

	while (head != NULL)
	{
		p = head;
		p = p->next;
		free(p->next);
		free(p);
	}
}
