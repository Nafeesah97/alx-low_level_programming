#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table to search
 * @key: key to be searched
 * Return: value associated with the element, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *val;
	unsigned long int i;

	i = key_index((const unsigned char *)key, ht->size);
	val = ht->array[i];
	while (val != NULL)
	{
		if (strcmp(val->key, key) == 0)
		{
			return (val->value);
		}
		val = val->next;
	}
	return (NULL);
}
