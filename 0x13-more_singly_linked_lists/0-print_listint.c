#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: the integer to be printed
 * Return: the number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t i;
	const listint_t *p;

	if (h == NULL)
		return (0);
	p = h;
	i = 0;
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
