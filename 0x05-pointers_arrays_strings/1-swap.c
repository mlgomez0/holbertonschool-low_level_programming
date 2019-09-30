#include "holberton.h"
#include <stdio.h>

/**
 *swap_int - swap two given parameters, change is performed in memory location
 *@a:receive an address location of a variable
 *@b:receive an address location of b variable
 *Return: void, it changes the variable in memory location
 */
void swap_int(int *a, int *b)
{
	int l;
	int m;

	l = *a;
	m = *b;

	*a = m;
	*b = l;
}
