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
	int i;

	for (i = 0; argc > 0; i++)
	{
		printf("%s\n", argv[i]);
		argc--;
	}
	return (EXIT_SUCCESS);
}
