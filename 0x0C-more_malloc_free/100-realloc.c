#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block with malloc and free.
 * @ptr: Pointer to the previously allocated memory.
 * @old_size: Size (in bytes) of the old allocated memory.
 * @new_size: New size (in bytes) of the reallocated memory.
 *
 * Return: Pointer to the newly reallocated memory block, or NULL on failure.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr = (char *)ptr;
	char *new_ptr_char;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	new_ptr_char = (char *)new_ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr_char[i] = old_ptr[i];
	}

	free(ptr);

	return (new_ptr);
}

