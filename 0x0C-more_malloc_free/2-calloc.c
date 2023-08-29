#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - it is like malloc but initiates memory to zero
  * @nmemb: number of elements of array to allocate.
  * @size: bytes of one element.
  * Return: pointer to the allocated memory.
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *byte_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	byte_ptr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
