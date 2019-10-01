#include "holberton.h"
#include <stdio.h>

/**
 *puts_half - print the last half of characters in a string
 *@str:string to be evaluated
 *Return:An string of character
 */
void puts_half(char *str)
{
	int i, j, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i / 2) + 1;
	}
	for (j = n; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
