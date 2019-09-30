#include "holberton.h"
#include <stdio.h>

/**
 *reset_to_98 - Allow to reset the value of a parameter
 *@n:receive an adress location of a variable
 *Return: void, it changes the variable in memory location
 */
void reset_to_98(int *n)
{
	*n = 98;
}
