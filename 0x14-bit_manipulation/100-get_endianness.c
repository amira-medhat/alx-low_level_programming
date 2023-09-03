#include "main.h"
#include <stdio.h>

/**
 * get_endianness - checks how binary numbers be stored in memory
 * Return: 0 if big indian, 1 if little.
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *byte_ptr = (unsigned char *)&num;

	if (*byte_ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
