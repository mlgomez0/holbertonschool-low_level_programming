#include "holberton.h"

/**
 *_reverse_array - reverse the order of a array
 *@a:array no invert
 *@n:size of string
 *Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, m;

	n = n - 1;
	for (i = n; i > (n / 2); i--)
	{
		j = a[i];
		m = n - i;
		a[i] = a[m];
		a[m] = j;
	}
}
