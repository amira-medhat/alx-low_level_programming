#include "main.h"
/**
 * _strspn - get the length of a prefix substring
 * @s: initial segment
 * @accept: bytes to be searched in s
 *
 * Return: number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
                break;
        }
        if (accept[j] == '\0')
            return (i);
    }
    return (i);
}
