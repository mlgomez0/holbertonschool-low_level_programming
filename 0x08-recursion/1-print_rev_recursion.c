#include"holberton.h"

/**
 *_print_rev_recursion - prints a given chart in inverted order
 *@s:array to be printed
 *Return: void
 */
void _print_rev_recursion(char *s)
{

	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
