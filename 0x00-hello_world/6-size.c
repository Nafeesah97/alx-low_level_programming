#include <stdio.h>

/**
 * main - A program that prints the size of various computer types
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int a;
	long long int b;
	float f;

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
