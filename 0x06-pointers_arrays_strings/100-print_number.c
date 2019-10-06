#include "holberton.h"

/**
 *print_number - print every number using _putchar function (by char)
 *@n:number to be evaluated
 *Return:void
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = n * -1;
		_putchar('-');
	}
	else
	{
		m = n;
	}
	if (m / 10)

		print_number(m / 10);

	_putchar(m % 10 + '0');

}
