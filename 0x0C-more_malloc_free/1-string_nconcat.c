#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strncpy - Copies at most n characters from source to destination.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to copy.
 * Return: pointer to the new string.
 */
char *_strncpy(char *dest, const char *src, unsigned int n)
{
    unsigned int i;
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }
    return dest;
}

/**
 * string_nconcat - Concatenates two strings, taking the first n characters of s2.
 * @s1: The first string.
 * @s2: The second string.
 * @n: Number of first characters of s2 to concatenate.
 * Return: Pointer to the new concatenated string, or NULL if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *result;
    unsigned int s1_len = (s1 == NULL) ? 0 : strlen(s1);
    unsigned int s2_len = (s2 == NULL) ? 0 : strlen(s2);

    if (n >= s2_len)
    {
        n = s2_len;
    }

    result = (char *)malloc(s1_len + n + 1);
    if (result == NULL)
    {
        return (NULL);
    }

    if (s1 != NULL)
    {
        _strncpy(result, s1, s1_len);
    }

    if (s2 != NULL && n > 0)
    {
        _strncpy(result + s1_len, s2, n);
    }

    result[s1_len + n] = '\0';
    return (result);
}
