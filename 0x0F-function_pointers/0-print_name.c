#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name- function that prints a name
 * @name: narguement to be printed
 * @f: the way it is to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	(*f)(name);
}
