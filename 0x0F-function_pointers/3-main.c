#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 *main - perform matematical operation two operator.
 *@argc: number of parameters
 *@argv: array of parameters
 *Return: result of the operation
 */
int main(int argc, char **argv)
{
	int (*opera)(int, int);
	int num1;
	int num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opera = get_op_func(argv[2]);
	if (opera == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	printf("%d\n", opera(num1, num2));
	return (0);
}
