#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @size: size of array.
 * @c: special character at the beginning.
 * Return: pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = (char *)malloc(size);
	if (arr == NULL)
		return (NULL);
	arr[0] = c;
	return (arr);
}
