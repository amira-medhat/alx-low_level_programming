#include "main.h"

/**
 * print_digit - prints digits
 * @n: the digit.
 * Return: digit.
 */

int print_digit(int n)
{
	return (_putchar(n + '0'));
}

/**
 * more_numbers - prints numbers from 0 to 14 for 10 times
 */

void more_numbers(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			print_digit(j);
		}
		for (k = 0; k <= 4; k++)
		{
			_putchar (1 + '0');
			print_digit(k);
		}
		_putchar('\n');
	}
}
