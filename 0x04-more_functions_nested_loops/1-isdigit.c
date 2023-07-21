#include "main.h"

/**
 * _isdigit - checks if the character is digit
 * @c: the character.
 * Return: 1 if digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
