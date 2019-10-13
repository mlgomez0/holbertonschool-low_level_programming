#include <stdio.h>
#include<stdlib.h>
/**
 *main - print the minimun number fo coinss
 *@argc: number of argumens
 *@argv: array
 *Return:an integer
 */
int main(int argc, char *argv[])
{
	int coins[5] = {25, 10, 5, 2, 1};
	int i;
	int k;
	int m;
	int l;

	k = 0;
	i = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	m = atoi(argv[1]);
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (i <= 4)
	{
		k = k + m / coins[i];
		l = m % coins[i];
		if (k > 0 && l == 0)
		{
			printf("%d\n", k);
			return (0);
		}
		if (k == 0 && l != 0)
		{
			i++;
		}
		if (k > 0 && l != 0)
		{
			m = l;
			i++;
		}
	}
	return (0);
}
