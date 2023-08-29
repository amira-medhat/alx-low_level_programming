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

	if (s1 == NULL && s2 == NULL)
	{
		ptr = (char *)malloc(sizeof(char));
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (s1 == NULL)
		size = n >= strlen(s2) ? (strlen(s2) + 1) : (n + 1);
	if (s2 == NULL)
		size = strlen(s1) + 1;
	if (s1 != NULL && s2 != NULL)
		size = n >= strlen(s2) ? (strlen(s1) + strlen(s2) + 1) : 
					 (strlen(s1) + n + 1);

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
		while (n >= strlen(s2) ? (s2[i] != '\0') : (n > 0))
		{
			ptr[i] = s2[j];
			i++;
			j++;
			n--;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
