#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string which will be duplicated.
 * Return: pointer to the new allocated memory.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = (char *)malloc((int)(sizeof(char) * strlen(str) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (int)(sizeof(char) * strlen(str) + 1); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
