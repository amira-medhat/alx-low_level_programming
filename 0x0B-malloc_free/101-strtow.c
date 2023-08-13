#include "main.h"
#include <string.h>

/**
 * strings_num - to find the number of strings in word
 * @str: the given string.
 * Return: number of single strings.
 */
int strings_num(char *str)
{
	int i = 0;
	int words = 0;

	while (str[i] != '\0')
	{
		while (str[i] == ' ')
		{
			i++;
		}
		if (str[i] != '\0')
		{
			words++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
		}
	}
	return (words);
}

/**
 * sub_malloc - to allocate the sub arrays
 * @str: the given string
 * @ptr: the new string.
 * Return: the new pointer.
 */

char **sub_malloc(char *str, char **ptr)
{
	int size;
	int word_start = -1;
	int j = 0;
	int i = 0;
	int index;

	while (str[i] != '\0')
	{
		if (word_start == -1 && str[i] != ' ')
		{
			word_start = i;
		}
		if (word_start != -1 && (str[i] == ' ' || str[i] == '\0'))
		{
			size = i - word_start;
			ptr[j] = (char *)malloc(sizeof(char) * (size + 1));
			if (ptr[j] == NULL)
			{
				int k;

				for (k = 0; k < j; k++)
					free(ptr[k]);
				free(ptr);
				return (NULL);
			}

			for (index = 0; index < size; index++)
			{
				ptr[j][index] = str[word_start + index];
			}
			ptr[j][size] = '\0';
			j++;
			word_start = -1;
		}
		i++;
	}
	return (ptr);
}

/**
 * strtow - function that splits a string into words
 * @str: the string.
 * Return: pointer to splited strings.
 */

char **strtow(char *str)
{
	char **ptr;

	if (str == NULL)
		return (NULL);
	if (strcmp(str, " ") == 0)
		return (NULL);
	if (strcmp(str, "") == 0)
		return (NULL);

	ptr = (char **)malloc(sizeof(char *) * (strings_num(str) + 1));
	if (ptr == NULL)
		return (NULL);

	ptr = sub_malloc(str, ptr);
	return (ptr);
}
