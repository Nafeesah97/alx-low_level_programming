#include "hash_tables.h"

/**
 * hash_djb2 -  function implementing the djb2 algorithm.
 * @str: string to be hashed
 * Return: index
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int ind;
	int c;

	ind = 5381;
	while ((c = *str++))
	{
		ind = ((ind << 5) + ind) + c; /* ind * 33 + c */
	}
	return (ind);
}
