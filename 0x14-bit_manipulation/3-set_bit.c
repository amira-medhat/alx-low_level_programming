#include "main.h"
#include <stdio.h>

/**
 * set_bit - makes specific bit equal 1
 * @n: pointer to integer.
 * @index: the givin index.
 * Return: 1 on Success, -1 on Failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
