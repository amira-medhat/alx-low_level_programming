#include "main.h"
#include <stdio.h>

/**
 * flip_bits - counts number of bits need to be toggled to change number
 * @n: the original number.
 * @m: the new number.
 * Return: the number of bits toggled.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int count = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((n >> i & 1) == (m >> i & 1))
			continue;
		else
			count++;
	}
	return (count);
}
