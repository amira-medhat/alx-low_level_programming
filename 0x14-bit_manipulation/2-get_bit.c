#include "main.h"
#include <stdio.h>

/**
 * get_bit - retreives a bit at certain given index
 * @n: the decimal number.
 * @index: the given index.
 * Return: the bit, 1 or 0.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	return ((n >> index) & 1);
}
