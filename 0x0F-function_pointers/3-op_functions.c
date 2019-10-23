#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - sum two integers
 * @a: one integer to add
 * @b: one integer to add
 * Return: the sum of two integer.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculate the difference between two numbers
 * @a: one elememt to use
 * @b: other element to use
 * Return: the difference between two arguments
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 * op_mul - calculate the product of two functions
 * @a: one element in calculation
 * @b: Second element in calculation
 * Return: the product of the two numbers.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - dive two numbers
 * @a: numerator
 * @b: divisor
 * Return: An integer
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
 * op_mod - calculate the remainder of division
 * @a: numerator
 * @b: divisor
 * Return: An integer
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
