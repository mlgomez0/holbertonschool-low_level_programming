#include "holberton.h"

/**
 *more_numbers - prints 10 times the tumbers from 0 to 14
 *
 *Return:print a table with 10 lines
 */

void more_numbers(void)
{
	int i, j, l, m;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j <= 9)
			{
				_putchar('0' + j);
			}
			else
			{
				l = j / 10;
				m = j % 10;
				_putchar('0' + l);
				_putchar('0' + m);
			}
		}
		_putchar('\n');
	}
}
