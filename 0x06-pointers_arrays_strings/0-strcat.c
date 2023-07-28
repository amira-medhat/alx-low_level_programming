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
 * _strcat - function appends a string to another
 * @src: the first string.
 * @dest: the second one.
 * Return: the result string.
 */

char *_strcat(char *dest, char *src)
{
	int src_len = _strlen(src);
	int k = 0;
	int j = 0;
	char emptystring[] = "";
	char *result = emptystring;

	while (src[k] != '\0')
	{
		result[k] = src[k];
		k++;
	}

	while (dest[j] != '\0')
	{
		result[src_len] = dest[j];
		src_len++;
		j++;
	}
	result[src_len] = '\0';
	return (result);
}
