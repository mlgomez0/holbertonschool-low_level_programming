#include<stdio.h>
#include"function_pointers.h"

/**
 *array_iterator - itetate an array to  give argument to function
 *@array:array to interate over
 *@size:size of the array
 *@action:pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || size == 0 || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
