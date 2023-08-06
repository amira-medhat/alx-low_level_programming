#include "main.h"

/**
 * _strlen_recursion - prints each char of string recursively
 * @s: the string.
 * Return: the length.
 */

int _strlen_recursion(char *s)
{
	int result = 0;

	while (*s != '\0')
	{
		result++;
		_strlen_recursion(s + 1);
	}
	return (result);
}
