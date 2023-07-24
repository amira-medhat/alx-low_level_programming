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
	        i = strlength;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		strlength = (strlength - 1) / 2;
	        i = strlength;
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
}
