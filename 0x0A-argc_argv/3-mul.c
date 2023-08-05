#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: arguments counter.
 * @argv: array of strings.
 * Return: 1 on Success.
 */

int main(int argc, char *argv[])
{
	int result;
	int i;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	result = atoi(argv[1]);

	for (i = 2; argc > i; i++)
	{
		result = result * atoi(argv[i]);
		argc--;
	}
	printf("%d\n", result);
	return (EXIT_SUCCESS);
}
