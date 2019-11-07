#include<stdio.h>
#include "holberton.h"

/**
 *get_bit - get the bit in a given index
 *@n:unsigned int to be evaluated
 *@index:index to evalute
 *Return: bit in the index or -1 if fails
 */


int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (i == index)
			return (n % 2);

		n = n / 2;
		i++;
	}
	return (-1);
}
