#include <stdio.h>

/**
 *main - print prime factor of a given number
 *
 *Return: always zero
 */

int main(void)
{
	long int j;
	long int n;

	n = 612852475143;
	for (j = 3; j < n; j++)
	{
		if (n % j == 0)
		{	n = n / j;
		}
	}
	printf("%ld", n);
	printf("\n");
	return (0);
}
