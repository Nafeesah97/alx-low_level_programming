#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: the key character to compute its index
 * @size: size of the array
 * Return: the index at which the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}
