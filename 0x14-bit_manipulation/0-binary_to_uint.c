#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * custom_pow - like pow in c89
 * @base: the base number.
 * @exponent: the number in power.
 * Return: resulted integer.
 */

unsigned int custom_pow(unsigned int base, unsigned int exponent)
{
	unsigned int result = 1;
	unsigned int i;

	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return (result);
}


/**
 * binary_to_uint - converts binary number to integer
 * @b: string cosists of 0's and 1's.
 * Return: the converted integer number.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i;
	unsigned int count = 0;
	unsigned int bit_value;

	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		bit_value = b[i] - '0';
		num += bit_value * custom_pow(2, count);
		count++;
	}
	return (num);
}
