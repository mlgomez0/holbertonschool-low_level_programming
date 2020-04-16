#include "search_algos.h"

/**
 *exponential_search - Search for a value using exponential search
 *@array: pointer to the first element of the array to search
 *@size: number of elements in the array
 *@value: value to search for
 *Return: first index where value is located
 */

int exponential_search(int *array, size_t size, int value)
{
	int b = 1, n = size, f = 0;

	if (array == NULL)
		return (-1);
	while (b < n  && array[b] < value)
	{
		printf("Value checked array[%d] = [%d]\n", b, array[b]);
		b *= 2;
		f = 1;
	}
	if (f == 1)
	{
		if (b >= n)
		{
			b = b / 2;
			printf("Value found between indexes [%d] and [%d]\n", b, n - 1);
			return (binary_search_mod(array, b, n - 1, value));
		}
		else
		{
			b = b / 2;
			printf("Value found between indexes [%d] and [%d]\n", b, b * 2);
			return (binary_search_mod(array, b, b * 2, value));
		}
	}

	return (-1);
}


/**
 *binary_search_mod - Search for a value using binary search
 *@array: pointer to the first element of the array to search
 *@l: low range for search
 *@r: higher level to search
 *@value: value to search for
 *Return: first index where value is located
 */

int binary_search_mod(int *array, int l, int r, int value)
{
	int i, m;

	if (array == NULL)
		return (-1);
	while (l <= r)
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
	return (-1);
}
