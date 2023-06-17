#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - function that allocates memory for an array,
 * @nmemb: an array of nmemb elements
 * @size: size of bytes
 * Return: address of memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	p = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);
	else
		return (p);
}
