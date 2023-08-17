#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: node
 * Return: 0 or sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (sum);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
