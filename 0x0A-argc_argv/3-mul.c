#include <stdio.h>
#include <stdlib.h>

/**
 * main- multiplies two numbers
 * @argc: the numumber of arguements
 * @argv: the arguements to be multiplied
 * Return: the result of 1 or error
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc > 1 && argc <= 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
