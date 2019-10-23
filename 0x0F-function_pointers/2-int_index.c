#include<stdio.h>
#include"function_pointers.h"

/**
 *int_index - function that search for an integer
 *@array:array to interate over
 *@size:size of the array
 *@cmp:pointer to a function
 *Return: The index when coincidence is found or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
