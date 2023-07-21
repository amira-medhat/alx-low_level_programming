#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: param represents the number.
 * Return: the number.
 */

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	{
		n = (-1) * n;
		lastdigit = n % 10;
		_putchar (lastdigit + '0');
		return (lastdigit);
	}
	lastdigit = n % 10;
	_putchar (lastdigit + '0');
	return (n);
}
