#include "holberton.h"
#include<stdlib.h>

/**
 *print_number - print every number using _putchar function (by char)
 *@n:number to be evaluated
 *Return:void
 */

void print_number(int n)
{
	int * p = (int *) malloc(2 * sizeof(int));
	*p = n;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	if (n / 10)

		print_number(n / 10);

	_putchar(n % 10 + '0');

	free(p);
}