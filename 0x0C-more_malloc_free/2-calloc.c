#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array,
 * @nmemb: an array of nmemb elements
 * @size: size of bytes
 * Return: address of memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	memset(p, 0, size * nmemb);
	return (p);
}
