#include"holberton.h"
#include<stdio.h>

/**
 *print_diagsums - print the sum of diagonal values
 *@a:matrix
 *@size:size of squared matrix
 *Return:void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int l;
	int k;

	l = 0;
	k = 0;
	for (i = 0; i < size; i++)
	{
		l = l + a[(size + 1) * i];
	}
	printf("%d, ", l);
	for (j = 0; j < size; j++)
	{
		k = k + a[(size - 1) * (j + 1)];
	}
	printf("%d\n", k);
}
