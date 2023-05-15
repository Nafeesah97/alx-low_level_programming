#include <stdio.h>
#include <stdlib.h>
#define UNUSED(x) (void)(x)

/**
 * main -  prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: arguments
 * Return: number of arguments
 */

int main(int argc, char **argv)
{
	int i;

	UNUSED(argv);


	for (i = argc - 1; i < argc; i++)
	{
		printf("%d\n", i);
	}
	return (0);
}
