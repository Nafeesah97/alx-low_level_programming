#include "main.h"

/**
 * _prime - check number if prime
 * @n: number to be checked
 * @i: possible divider
 * Return: 1 or 0
 */

int _prime(int n, int i)
{
	int x, y;

	y = n % i;
	x = n / i;

	if (y == 0 && i > 1)
		return (0);
	if (x < i)
		return (1);
	return (_prime(n, i + 1));
}

/**
 * is_prime_number - check  input integer is a prime number,
 * @n: number to be checked
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, 1));
}
