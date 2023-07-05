#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: to be printed
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
	{
		printf("[0] (nil)\n");
		return (i);
	}

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
