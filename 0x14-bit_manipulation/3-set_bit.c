#include<stdio.h>
#include "holberton.h"

/**
 *set_bit - set the value to 1 at a given index
 *@n:long int to be evaluated
 *@index:index to evalute
 *Return: 1 if it works or zero if it does not
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 63)
		return (-1);
	*n = 1 << index | *n;
	return (1);

}
