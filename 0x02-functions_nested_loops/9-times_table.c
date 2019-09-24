#include"holberton.h"
/**
 *times_table - prints the 9 times table
 *Return: void
 */
void times_table(void)
{
	int n, m, l, o, p;

	for (n = 0; n <= 9; n++)
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
