#include "hash_tables.h"

/**
 * hash_table_create - function that creates hash table
 * @size: size of table
 * Return: the new created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;
	unsigned long int i;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t) * size);
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	return (new);
}
