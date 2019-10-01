#include "holberton.h"
#include <stdio.h>

/**
 *puts2 - Prints every other character of a string
 *@str:string to be evaluated
 *Return: Print a shorter string
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
	i++;
	}
	_putchar('\n');
}
