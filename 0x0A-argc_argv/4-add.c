#include <stdio.h>
#include<stdlib.h>
/**
 *main - add positive numbers
 *@argc: number of argumens
 *@argv: array
 *Return:an integer
 */
int main(int argc, char *argv[])
{
	int j;
	int i;
	int add;

	add = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		add = add + atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
