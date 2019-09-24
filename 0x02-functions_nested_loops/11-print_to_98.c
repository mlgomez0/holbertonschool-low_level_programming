#include<stdio.h>
#include"holberton.h"

/**
 *print_to_98 - prints numbers below or above 98
 *@n:integer to start
 *Return: void
 */
void print_to_98(int n)
{

	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
}
