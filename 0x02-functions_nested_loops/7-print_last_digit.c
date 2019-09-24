#include<stdio.h>
#include"holberton.h"

/**
 *print_last_digit - prints the last digit of a given number
 *@n: The number to be checked
 *
 *Return: the last digit of given number-
 */
int print_last_digit(int n)
{
	int m;

	if (n >= 0)
	{
		m = n % 10;
		_putchar('0' + m);
	}
	else
	{
		n = n * -1;
		m = n % 10;
		_putchar('0' + m);
	}
	return (m);

}
