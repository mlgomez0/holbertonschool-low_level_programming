#include"holberton.h"
#include<stdlib.h>

/**
 *array_range - creates an array of integers containing range
 *@min:range min of the range
 *@max:max value of the range
  *Return:A pointer to the asigned memory
 */

int *array_range(int min, int max)
{
	int *p;
	int m;
	int i;


	if (min > max)
		return (NULL);
	m = (max - min) + 1;

	p = malloc(sizeof(int) * m);
		if (p == NULL)
			return (NULL);

	for (i = 0; i < m; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
