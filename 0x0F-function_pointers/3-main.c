#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main fuction
 * @argc: number of argument
 * @argv: argemnts
 * Return: result
 */

int main(int argc, char *argv[])
{
	int (*calc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	calc = get_op_func(argv[2]);

	if (!calc)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", calc(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
