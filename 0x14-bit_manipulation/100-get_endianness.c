#include<stdio.h>
#include "holberton.h"

/**
 *get_endianness - checks the endianness
 *Return: 1 if it is little and 0 if it is big
 */


int get_endianness(void)
{
	unsigned int end;
	char *s = (char *)&end;

	end = 1;
	if (*s)
		return (1);
	else
		return (0);
}
