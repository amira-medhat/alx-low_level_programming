#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: param represents the number.
 * Return: the number.
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last  = ((-1) * n) % 10;
	}
	else if (n == 0)
	{
		last = 0;
	}
	else
	{
		last = n % 10;
	}
	_putchar (last + '0');
	return (last);
}
