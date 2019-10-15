#include"holberton.h"
#include<stdlib.h>

/**
 *alloc_grid - allocate space for a pointer to a two dimensional array
 *@width: width of the two dimensional array
 *@height: height of the two dimensional array
 *Return:a pointer to a two dimensional
 */

int **alloc_grid(int width, int height)
{
	int k;
	int **t;
	int j;
	int l;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	t = malloc(height * sizeof(int *));
	if (t == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		t[i] = (malloc(width * sizeof(int)));

			if (t[i] == NULL)
			{
				for (j = i; j >= 0; j--)
				{
					free(t[j]);
				}
				free(t);
				return (NULL);
			}
	}

	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			t[k][l] = 0;
		}
	}
	return (t);
}
