#include "holberton.h"

/**
 *is_palindrome - evaluate if a string is palindrome
 *@n:value to be evaluated
 *Return: integer
 */
int is_palindrome(char *s)
{
	return (_value_palin(n, 2));
}
/**
 *_value_palin - makes recursion to find out if number is prime
 *@x:value to be evaluated
 *@a:integer to make interation
 *Return: integer
 */
int _value_palin(int x, int a)
{

	if (x <= 1)
		return (0);
	if ((x % a == 0) && a < x)
		return (0);

	if (a == x)
		return (1);

	return (_value_prime(x, (a + 1)));
}
