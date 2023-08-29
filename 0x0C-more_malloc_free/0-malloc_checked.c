#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - checks if allocation has been done properly
 * @b: the size of allocation.
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (!ptr)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
