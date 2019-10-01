#include "holberton.h"
#include <stdio.h>

/**
 *print_rev - prints a given string in reverse order
 *@s:string to be evaluated
 *Return:An string of character
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
