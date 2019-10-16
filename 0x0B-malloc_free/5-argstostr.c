#include"holberton.h"
#include<stdlib.h>

/**
 *argstostr - concatenates all the arguments of a program
 *@ac: number of arguments
 *@av: arrays of arguments
 *Return:char
 */

char *argstostr(int ac, char **av)
{
	int j, k, l, i, elem, p;
	char *str;

	i = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	elem = 1;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k]; k++)
		{
			elem = elem + k;
		}

	}
	str = malloc(elem * sizeof(char));

		if (str == NULL)
			return (NULL);
	for (l = 0; l < ac; l++)
	{
		for (p = 0; av[l][p]; p++)
		{
			str[i] = av[l][p];
			i++;
		}

		str[i] = '\n';
		i++;
	}
	return (str);
}
