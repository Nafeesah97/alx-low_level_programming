#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: node
 */

void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(head->next);
		free(p);
	}
}
