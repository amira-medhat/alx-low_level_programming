#include "main.h"
#include <stdio.h>

/**
 * clear_bit - makes specific bit equal 0
 * @n: pointer to integer.
 * @index: the givin index.
 * Return: 1 on Success, -1 on Failure.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
