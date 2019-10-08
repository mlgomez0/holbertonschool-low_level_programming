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
	int n;

	l = 0;
	k = 0;
	n = size * size;
	for (i = 0; i < n; i = i + size + 1)
	{
		l = l + *(a + i);
	}
	printf("%d, ", l);
	size = size - 1;
	for (j = size; j < n; j = j + size)
	{
		k = k + *(a + j);
	}
	printf("%d\n", k);
}
