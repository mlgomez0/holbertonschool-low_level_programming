#include "holberton.h"

/**
 *_sqrt_recursion - prints natural square root for a number
 *@n:value to be evaluated
 *Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_value_recu(n, 1));
}

int _value_recu(int x, int a)
{

	if ((a * a) > x)
		return (-1);

	if ((a * a) == x)
		return (a);

	return (_value_recu(x, (a + 1)));
}
