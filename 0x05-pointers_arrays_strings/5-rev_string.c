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
 * rev_string - reverses a string
 * @s: the string.
 */

void rev_string(char *s)
{
	int strlength = _strlen(s);
	int i;
	char rev[20];
	int j = 0;

	for (i = strlength - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	rev[strlength] = '\0';
	for (j = 0; j <= strlength; j++)
	{
		s[j] = rev[j];
	}
}
