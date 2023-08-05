#include "main.h"

/**
 * _isalpha - checks if char is alpha
 * @c: the char.
 * Return: 1 if true.
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
