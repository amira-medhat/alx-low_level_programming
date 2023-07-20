#include "main.h"

/**
 * _islower - checks if the character is lowercase
 * @c: the character to be checked.
 * Return: 1 on Success and 0 on Fail.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
