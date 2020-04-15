#include "search_algos.h"

/**
 *linear_search - Search for a value using lineal search
 *@array: pointer to the first element of the array to search
 *@size: number of elements in the array
 *@value: value to search for
 *Return: first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	int i, n;

	n = size;
	if (array == NULL)
		return (-1);
	for (i = 0; i < n; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
