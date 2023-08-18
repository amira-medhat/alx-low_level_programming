#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function given a parameter
 * @array: the array contains elements.
 * @size: size of array.
 * @action: pointer to another function to execute.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
