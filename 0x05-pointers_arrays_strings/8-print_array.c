#include <stdio.h>
/**
 *print_array - print any given array
 *@a:array to be evaluated
 *@n:size of the string to be printed
 *Return:An string of character
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%i, ", a[i]);
		}
		else
		{
			printf("%i", a[i]);
		}
	}
	printf("\n");
}
