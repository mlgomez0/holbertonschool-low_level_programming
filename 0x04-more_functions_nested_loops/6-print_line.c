#include "holberton.h"

/**
 *print_line - prints a line with width based on parameter
 *@n:lenght of the line
 *Return:a line
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
			_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
