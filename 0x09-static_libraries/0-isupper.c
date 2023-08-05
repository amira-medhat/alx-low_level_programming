#include "main.h"

/**
 * _isupper - checks if the character is uppercase
 * @c: the character.
 * Return: 1 on uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
