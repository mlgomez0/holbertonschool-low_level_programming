#include<stdio.h>
#include"function_pointers.h"

/**
 *array_iterator - receives poiner to a function and itetate an array to  given arguments
 *@array:array to interate over
 *@size:size of the array
 *@action:pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
