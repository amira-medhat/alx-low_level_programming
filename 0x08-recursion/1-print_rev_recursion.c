#include "main.h"

/**
 * _print_rev_recursion - prints each char of string recursively
 * @s: the string.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
