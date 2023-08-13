#include "main.h"

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
	int j = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		size = 1;
		if (i != 0)
		{
		if (str[i - 1] == ' ' && str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				size++;
				i++;
			}
		ptr[j] = (char *)malloc(sizeof(char) * size);
		j++;
		}
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
	int i = 0;
	int j = 0;
	int index;

	if (str == NULL)
		return (NULL);

	ptr = (char **)malloc(sizeof(char *) * strings_num(str));
	if (ptr == NULL)
		return (NULL);

	ptr = sub_malloc(str, ptr);

	while (str[i] != '\0')
	{
		index = 0;
		if (i != 0)
		{
		if (str[i - 1] == ' ' && str[i] != ' ')
		{
			while (str[i] != ' ')
			{
				ptr[j][index] = str[i];
				index++;
				i++;
			}
			ptr[j][index] = '\0';
			j++;
		}
		}
		i++;
	}
	return (ptr);
}
