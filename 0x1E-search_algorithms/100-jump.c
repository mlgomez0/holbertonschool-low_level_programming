#include "search_algos.h"

/**
 *jump_search - Search for a value using jump search
 *@array: pointer to the first element of the array to search
 *@size: number of elements in the array
 *@value: value to search for
 *Return: first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int i = 0, n, t, m;

	if (array == NULL)
		return (-1);
	n = size - 1;
	m = sqrt(n);
	t = i;
	while (i <= n)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if ((array[i] <= value && value <= array[i + m]) || i + m > n)
		{
			t = i;
			printf("Value found between indexes [%d] and [%d]\n", i, m + i);
			break;
		}
		else
		{
			t = i;
			i  = i + m;
		}
	}
	while (t <= n)
	{
		printf("Value checked array[%d] = [%d]\n", t, array[t]);
		if (array[t] == value)
			return (t);
		t++;
	}
	return (-1);
}
