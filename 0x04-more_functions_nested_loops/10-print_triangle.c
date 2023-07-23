#include "main.h"

/**
 * print_triangle - to print triangle shape
 * @size: the size of the triangle.
 */

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar (' ');
		}
		while (j < size)
		{
			_putchar ('#');
			j++;
		}
		_putchar ('\n');
	}
	}
	else
	_putchar ('\n');
}
