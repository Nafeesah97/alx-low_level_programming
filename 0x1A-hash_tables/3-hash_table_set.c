#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht:  hash table you want to add or update the key/value to
 * @key: key
 * @value: value
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *old;
	unsigned long int i;


	if (key == NULL || ht == NULL || *key == '\0')
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = NULL;

	i = key_index((const unsigned char *)key, ht->size);
	if (ht->array[i] == NULL)
	{
		ht->array[i] = new;
	}
	else
	{
		old = ht->array[i];
		ht->array[i] = new;
		new->next = old;
	}
	return (1);
}
