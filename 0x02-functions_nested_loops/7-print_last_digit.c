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

	m = n % 10;
	if (m >= 0)
	{
		_putchar('0' + m);
	}
	else
	{
		m = m * -1;
		_putchar('0' + m);
	}
	return (m);
}
