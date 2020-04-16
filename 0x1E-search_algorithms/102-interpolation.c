#include "search_algos.h"

/**
 *interpolation_search - Search for a value using interpolation search
 *@array: pointer to the first element of the array to search
 *@size: number of elements in the array
 *@value: value to search for
 *Return: first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	int n, l, h, m;

	n = size;
	if (array == NULL)
		return (-1);
	l = 0;
	h = n - 1;
	while ((array[h] != array[l]) && (value <= array[h]) && (value >= array[l]))
	{
		m = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%d] = [%d]\n", m, array[m]);
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			h = m - 1;
		else
			return (m);
	}
	if (value == array[l])
		return (l);
	else if (value > array[h] || value < array[l])
	{
		m = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		printf("Value checked array[%d] is out of range\n", m);
		return (-1);
	}
	else
		return (-1);
}
