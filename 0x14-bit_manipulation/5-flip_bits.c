#include<stdio.h>
#include "holberton.h"

/**
 *flip_bits - number of bits to flip to get from one number to other
 *@n:unsigned long int initial number
 *@m:unsigned long int final number,
 *Return: 1 if it works or -1 if it does not
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tem;
	int i = 0;

	tem = n ^ m;
	while (tem)
	{
		if (tem & 1)
			i++;

		tem = tem >> 1;
	}

	return (i);

}
