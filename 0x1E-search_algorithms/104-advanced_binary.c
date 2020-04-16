#include "search_algos.h"

/**
 *advanced_binary - Search for a value using advanced binary search
 *@array: pointer to the first element of the array to search
 *@size: number of elements in the array
 *@value: value to search for
 *Return: first index where value is located
 */

int advanced_binary(int *array, size_t size, int value)
{
	int n, l, r;

	n = size;
	if (array == NULL)
		return (-1);
	l = 0;
	r = n - 1;
	return (recursive_search(array, l, r, value));
}

/**
 *binary_print - Print a binary search
 *@array: pointer to the first element of the array to search
 */

int recursive_search(int *array, int l, int r, int value)
{
	int m;

	if (r >= l)
	{
		m = l + (r - l) / 2;
		binary_print(array, l, m);
		if (value == array[m])
			return (m);
		if (array[m] > value)
			return (recursive_search(array, l, m - 1, value));
		return (recursive_search(array, m + 1, r, value));
	}
	return (-1);
}



/**
 *binary_print - Print a binary search
 *@array: pointer to the first element of the array to search
 */

void binary_print(int *array, int l, int r)
{
	printf("Searching in array: ");
	while (l < r)
	{
		printf("%d, ", array[l]);
		l++;
	}
	printf("%d\n", array[l]);
}
