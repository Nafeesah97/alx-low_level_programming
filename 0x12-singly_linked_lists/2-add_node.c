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
	size_t i;
	const char *temp;

	if (str == NULL)
		return (NULL);

	i = 0;
	temp = str;
	while (*temp != '\0')
	{
		i++;
		temp++;
	}

	p = malloc(sizeof(struct list_s));
	if (p == NULL)
		return (NULL);

	p->str = strdup(str);
	
	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}

	p->len = i;
	p->next = *head;
	*head = p;

	return (p);
}
