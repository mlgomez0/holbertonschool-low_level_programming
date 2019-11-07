#include<stdio.h>
#include "holberton.h"

/**
 *print_binary - convert an unsigned int into binary
 *@n:unsigned int to be evaluated
 */


void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
