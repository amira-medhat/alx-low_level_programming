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
	int size;

	if (s1 == NULL)
	{
		size = (int)(sizeof(char) * (strlen(s2) + 1));
		ptr = (char *)malloc(size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr[0] = '\0';
		return (ptr);
	}

	if (s2 == NULL)
	{
		size = (int)(sizeof(char) * (strlen(s1) + 1));
		ptr = (char *)malloc(size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		strcpy(ptr, s1);
		return (ptr);
	}

	size = (int)(sizeof(char) * (strlen(s1) + strlen(s2) + 1));
	ptr = (char *)malloc(size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	strcpy(ptr, s1);
	strcat(ptr, s2);
	return (ptr);
}
