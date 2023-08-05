#include "main.h"

/**
 * _islower - checks if the character is uppercase
 * @c: the character.
 * Return: 1 on lowercase, 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
