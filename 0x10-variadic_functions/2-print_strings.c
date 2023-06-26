#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the separator for the string
 * @n: number of string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list print;

	va_start(print, n);

	for (i = 0; i < n; i++)
	{
		char *printed_char = va_arg(print, char *);
		if (printed_char == NULL)
		{
			printf("nil");
		}
		printf("%s", printed_char);
		
		if (i < n - 1)
		{
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(print);

	printf("\n");
}
