#include "holberton.h"

/**
 *is_prime_number - evaluates if a numver is prime
 *@n:value to be evaluated
 *Return: integer
 */
int is_prime_number(int n)
{
	return (_value_prime(n, 2));
}
/**
 *_value_prime - makes recursion to find out if number is prime
 *@x:value to be evaluated
 *@a:integer to make interation
 *Return: integer
 */
int _value_prime(int x, int a)
{

	if (x <= 1)
		return (0);
	if ((x % a == 0) && a < x)
		return (0);

	if (a == x)
		return (1);

	return (_value_prime(x, (a + 1)));
}
