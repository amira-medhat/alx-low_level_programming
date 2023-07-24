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
 * print_rev - prints a string in a reverse order
 * @s: the string.
 */

void print_rev(char *s)
{
	int strlength = _strlen(s);
	int i;

	for (i = strlength - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
