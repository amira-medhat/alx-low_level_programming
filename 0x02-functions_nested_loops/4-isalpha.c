#include "main.h"

/**
 * _isalpha - checks if the character is letter
 * Return: 1 on Success, 0 on Fail.
 * @c: the character to be checked.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
