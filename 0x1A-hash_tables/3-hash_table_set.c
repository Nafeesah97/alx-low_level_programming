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

	i = key_index((const unsigned char *)key, ht->size);
	old = ht->array[i];
	while (old != NULL)
	{
		if (strcmp(old->key, key) == 0)
		{
			free(old->value);
			old->value = strdup(value);
			if (old->value == NULL)
				return (0);
			return (1);
		}
		old = old->next
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[i]
	ht->array[i] = new;

	return (1);
}
