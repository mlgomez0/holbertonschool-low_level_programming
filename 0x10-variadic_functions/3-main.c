#include "variadic_functions.h"
#include<stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	print_all("eie", 'H', 0, "lberton");
    	print_all("ceiscs", 'H', 0, "lberton", 'p', NULL);
	return (0);
}
