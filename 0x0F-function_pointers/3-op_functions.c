#include "3-calc.h"

/**
 * op_add - this function adds two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: the addition.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - this subctracts two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: the difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - this multiplies two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: the multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - this divides two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: the division.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - this calculates the module of two numbers.
 * @a: the first number.
 * @b: the second number.
 *
 * Return: the remainder of the division.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
