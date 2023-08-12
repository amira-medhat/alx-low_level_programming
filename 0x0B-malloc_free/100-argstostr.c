#include "main.h"
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: number of arguments of your program.
 * @av: array of strings(argumrnts).
 * Return: pointer to new string.
 */

char *argstostr(int ac, char **av)
{
	char *ptr;
	int i;
	int j;
	int size = 1;
	int index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		size += strlen(av[i]) + 1;
	}
	size = (int)(sizeof(char) * size);
	ptr = (char *)malloc(size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			ptr[index] = av[i][j];
			j++;
			index++;
		}
		ptr[index] = '\n';
		index++;
	}
	return (ptr);
}
