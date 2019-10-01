#include "holberton.h"
#include <stdio.h>

/**
 *_puts - prints a given string
 *@str:string to be evaluated
 *Return:An string of character
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
