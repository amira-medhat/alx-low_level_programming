#include "main.h"
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string which will be duplicated.
 * Return: pointer to the new allocated memory.
 */

char *_strdup(char *str)
{
	char *ptr = (char *)malloc(sizeof(char) * strlen(str));
	long unsigned int i;

	if (str == NULL)
		return (NULL);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < sizeof(char) * strlen(str); i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
