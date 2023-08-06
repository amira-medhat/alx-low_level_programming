#include "main.h"

/**
 * factorial - calculates factorial of number
 * @n: the number.
 * Return: the result.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
