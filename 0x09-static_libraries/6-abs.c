#include<stdio.h>
#include"holberton.h"

/**
 *_abs - print the absolute value of a number
 *@n: The number to be checked
 *
 *Return: positive integer-
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
