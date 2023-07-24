#include "main.h"

/**
 * _strlen - to recognize the length of string
 * @s: the string.
 * Return: its length.
 */

int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}

/**
 * puts_half - prints half of string
 * @str: the string.
 */

void puts_half(char *str)
{
	int strlength = _strlen(str);
	int i;

	if (strlength % 2 == 0)
	{
		strlength = strlength / 2;
		for (i = strlength; i >= 0; i--)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		strlength = (length_of_the_string - 1) / 2;
		for (i = strlength; i >= 0; i--)
		{
			_putchar(str[i]);
		}
	}
}
