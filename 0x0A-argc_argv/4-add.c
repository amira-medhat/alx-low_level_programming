#include <stdio.h>
#include <stdlib.h>

/**
 * isPositiveNumber - checks if number is positive
 * @str: the string represents the number.
 * Return: 1 if true, 0 if false.
 */

int isPositiveNumber(const char *str)
{
	int i = 0;

	while (str[i] == ' ')
	{
		i++;
	}

	if (str[i] == '+')
	{
		i++;
	}
	else if (str[i] == '-')
	{
		return (0);
	}
	else if (str[i] == '#')
	{
		return (0);
	}

	while (str[i] != '\0')
	{
		if ((str[i] < '0' || str[i] > '9') || str[i] == '#')
		{
			return (0);
		}
		i++;
	}

	if (i > 0)
		return (1);
	else
		return (0);
}

/**
 * main - main function
 * @argc: arguments counter.
 * @argv: array of strings.
 * Return: 1 on Success.
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1; argc > i; i++)
		{
			if (isPositiveNumber(argv[i]))
				sum = sum + atoi(argv[i]);
			else if (!(isPositiveNumber(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (EXIT_SUCCESS);
}
