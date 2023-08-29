#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string.
 * @s2: the second string.
 * @n: number of first characters of s2.
 * Return: pointer to the new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int size, i = 0, j = 0;
	unsigned int s1_len = strlen(s1);
	unsigned int s2_len = strlen(s2);

	if (s1 == NULL && s2 == NULL)
	{
		ptr = (char *)malloc(sizeof(char));
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (s1 == NULL)
		size = (n >= s2_len) ? (s2_len + 1) : (n + 1);
	if (s2 == NULL)
		size = s1_len + 1;
	if (s1 != NULL && s2 != NULL)
		size = (n >= strlen(s2)) ? (s1_len + s2_len + 1) : (s1_len + n + 1);
	ptr = (char *)malloc(size);
	if (ptr == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
	}
	if (s2 != NULL)
	{
		while ((n >= strlen(s2)) ? (s2[i] != '\0') : (n > 0))
		{
			ptr[i] = s2[j];
			i++, j++, n--;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
