#include "main.h"

/**
 * _is_prime_main - checks if number is prime
 * @num: the number.
 * @val: parm.
 * Return: 1 if true, 0 if false.
 */

int _is_prime_main(int num, int val)
{
	if (val >= num/2)
		return(1);
	if (num % val == 0)
		return (0);
	return (_is_prime_main(num, val + 1));
}

/**
 * is_prime_number - task function
 * @n: the number.
 * Return: 1 if true, 0 if false.
 */

int is_prime_number(int n)
{
	return (_is_prime_main(n, 2));
}
