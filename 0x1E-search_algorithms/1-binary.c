#include "search_algos.h"

/**
 *binary_search - Search for a value using binary search
 *@array: pointer to the first element of the array to search
 *@size: number of elements in the array
 *@value: value to search for
 *Return: first index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	int i, n, l, r, m;

	n = size;
	if (array == NULL)
		return (-1);
	l = 0;
	r = n - 1;
	m = (l + r) / 2;
	while (l < r)
	{
		i = l;
		printf("Searching in array: ");
		while (i < r)
		{
			printf("%d, ", array[i]);
			i++;
		}
		printf("%d\n", array[i]);
		m = (r + l) / 2;
		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}
	printf("Searching in array: %d\n", array[l]);
	return (-1);
}
