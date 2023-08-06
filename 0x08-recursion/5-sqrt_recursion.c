#include "main.h"

/**
 * _sqrt_recursion_main - finds sqrt of number
 * @num: the number.
 * @val: used parm.
 * Return: the result.
 */

int _sqrt_recursion_main(int num, int val)
{
	if (val * val > num)
		return (-1);
	if (val * val == num)
		return (val);
	return (_sqrt_recursion_main(num, val + 1));
}

/**
 * _sqrt_recursion - task function
 * @n: the number.
 * Return: the result.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_main(n, 1));
}
