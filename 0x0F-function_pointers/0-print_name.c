#include "function_pointers.h"

/**
 * print_name- function that prints a name
 * @name: narguement to be printed
 * @(*f)(char *): the way it is to be printed
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
