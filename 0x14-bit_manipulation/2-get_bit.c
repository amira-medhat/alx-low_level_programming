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
	if (n > 1 && index > 0)
	{
		get_bit(n >> 1, index - 1);
	}
	if (index == 0)
		return ((n & 1) ? '1' : '0');
	return (-1);
}
