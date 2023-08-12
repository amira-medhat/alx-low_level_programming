#include "main.h"
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string.
 * @s2: the second string.
 * Return: pointer to the new string.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size = (int)(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	int i = 0;
	int j = 0;

	ptr = (char *)malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}

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
