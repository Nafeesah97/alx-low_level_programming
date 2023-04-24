#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar ('\n');
	return (0);
}
