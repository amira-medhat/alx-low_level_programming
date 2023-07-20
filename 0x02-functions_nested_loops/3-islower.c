#include "main.h"

/**
 * _islower - checks if the character is lowercase
 * @ch: the character to be checked.
 * Return: 1 on Success and 0 on Fail.
 */

int _islower(char ch)
{
	if (ch >= 97)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
