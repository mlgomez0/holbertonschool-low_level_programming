#include"holberton.h"
#include<stdlib.h>
/**
 *print_to_98 - prints numbers below or above 98
 *@n:integer to start
 *Return: void
 */
void print_to_98(int n);
{
	int m;

	if (n = 98)
	{
		_putchar('9');
		_putchar('8');
	}
	else if (n >= 98)
	{
		for (m = n; m <= 9; m++)
			for (l = 0; l <= 8; l++)
				if (m == 0)
					_putchar('0' + l);
					if (l ==
					_putchar(44);

				else

	{
		for (m = 0; m <= 9; m++)
		{
			l = n * m;
			if (l < 10)
			{
				if (m != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}
				_putchar('0' + l);
			}
			else
			{
				o = l / 10;
				p = l % 10;

				if (m != 0)
				{
					_putchar(44);
					_putchar(32);
				}
				_putchar('0' + o);
				_putchar('0' + p);
			}
		}
		_putchar('\n');
	}
}
