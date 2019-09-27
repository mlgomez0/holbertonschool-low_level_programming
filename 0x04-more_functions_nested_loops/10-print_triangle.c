#include "holberton.h"

/**
 *print_triangle - print a triangle of #
 *@size: the size of the triangle
 *Return:void
 */

void print_triangle(int size)
{
	int i;
	int j;
	int m;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			j = size - i;
			for (; j > 0; j--)
			{
				_putchar(32);
			}

			for (m = 1 ; m <= i; m++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
