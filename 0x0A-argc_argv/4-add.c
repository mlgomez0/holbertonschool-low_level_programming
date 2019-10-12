#include <stdio.h>
#include<stdlib.h>
/**
 * main - add pisitive numbers
 *@argc: number of argumens
 *@argv: array
 *Return:an integer
 */
int main(int argc, char *argv[])
{
	int i;
	int add;

	add = 0;
	if (argc == 1)
		printf("%d\n", 0);

	for (i = 1; i < argc; i++)
	{
		if (argv[i] < '0' && argv[i] > '9')
		{
			printf("Error\n");
		}
		m = atoi
		add = add + atoi(argv[i]);
	}


			mul = mul * atoi(argv[i]);
		}
		printf("%d\n", mul);
			return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
