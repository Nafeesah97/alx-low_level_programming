#include <stdlib.h>
#include <stdio.h>

/**
 * main - To print name of program
 * @argc: size of line argument
 * @argv: array that holds line of command
 * Return: program
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv);
	}
	return (0);
}
