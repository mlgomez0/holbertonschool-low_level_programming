#include<stdio.h>
#include"holberton.h"

/**
 *jack_bauer - prints every minute of the day of Jack B
 *
 *
 *Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int m;

	for (i = 0; i <= 2; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				for (k = 0; k <= 5; k++)
				{
					for (m = 0; m <= 9; m++)
					{
						if (i < 2)
						{
							_putchar('0' + i);
							_putchar('0' + j);
							_putchar(':');
							_putchar('0' + k);
							_putchar('0' + m);
							_putchar('\n');
						}
						else if (i == 2 && j <= 3)
						{
							_putchar('0' + i);
							_putchar('0' + j);
							_putchar(':');
							_putchar('0' + k);
							_putchar('0' + m);
							_putchar('\n');
						}

					}
				}
			}
		}
}
