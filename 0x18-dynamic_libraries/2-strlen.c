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
