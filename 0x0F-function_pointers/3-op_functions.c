#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - add integers
 * @a: first number
 * @b: second number
 * Return: Result
 */

int op_add(int a, int b)
{
	int res;

	res = a + b;
	return (res);
}

/**
 * op_sub - subtracts integers from each other
 * @a: first integer
 * @b: second integer
 * Return: result
 */

int op_sub(int a, int b)
{
	int res;

	res = a - b;
	return (res);
}

/**
 * op_mul - multiplies integers
 * @a: first integer
 * @b: second integer
 * Return: Result
 */

int op_mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}

/**
 * op_div - divides integers
 * @a: first number
 * @b: second number
 * Return: Result;
 */

int op_div(int a, int b)
{
	int res;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = a  / b;
	return (res);
}

/**
 * op_mod - Finds remainder of a division
 * @a: first number
 * @b: second number
 * Return: result
 */

int op_mod(int a, int b)
{
	int res;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = a % b;
	return (res);
}
