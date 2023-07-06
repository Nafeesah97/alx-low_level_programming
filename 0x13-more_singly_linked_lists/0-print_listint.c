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
	p = malloc(sizeof(size_t));
	if (p == NULL)
	{
		return (0);
	}

	p = h;
	i = 0;
	while (p != NULL)
	{
		if (p->n == NULL)
			return (0);
		else
		{
			printf("%d\n", p->n);
			p++;
			i++;
		}
	}
	return (i);
}
