#include"holberton.h"

/**
 *factorial - prints the factorial of a given number
 *@n:number whose factorial will be evaluated
 *Return: integer
 */
int factorial(int n)
{

	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
