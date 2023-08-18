#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function searches for an integer
 * @array: passed array to search in it.
 * @size: size of array.
 * @cmp: pointer to another function to compare.
 * Return: the index of the element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}
