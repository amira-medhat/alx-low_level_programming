#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string.
 * @s2: the second string.
 * Return: pointer to the new string.
 */
char *str_concat(char *s1, char *s2)
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

	if (s1 != NULL)
		size = strlen(s1) + 1;
	if (s2 != NULL)
		size = strlen(s2) + 1;

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
		while (s2[j] != '\0')
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
	}
	ptr[i] = '\0';
	return (ptr);
}
