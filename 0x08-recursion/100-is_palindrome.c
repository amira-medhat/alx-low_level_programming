#include "main.h"
#include <string.h>

/**
 * is_palindrome_recursive - checks if string is palindrome
 * @s: the string.
 * @start: start of string.
 * @end: end of string.
 * Return: 1 if true, 0 if false.
 */


int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - task function
 * @s: the string.
 * Return: 1 if true, 0 if false.
 */

int is_palindrome(char *s)
{
	int length = strlen(s);

	return (is_palindrome_recursive(s, 0, length - 1));
}
