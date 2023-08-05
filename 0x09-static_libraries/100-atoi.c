#include "main.h"

/**
 * _isdigit - checks if char is digit
 * @c: the char to be checked.
 * Return: 1 if true, 0 if false.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/**
 * _atoi - returns the number in the string
 * @s: the string.
 * Return: the detecated number.
 */

int _atoi(char *s)
{
	int num = 0;
	int i = 0;
	int negative = 0;
	int digit = 0;

	while (s[i] != '\0')
	{
		digit = _isdigit(s[i]);
		if (digit)
		{
			num = num * (10) + (s[i] - '0');
			if (s[i - 1] == '-')
				negative = 1;
		}
		i++;
	}
	if (negative == 1)
		num = num * (-1);
	return (num);
}
