#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: arguments counter.
 * @argv: array to strings.
 * Return: 1 on Success.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (EXIT_SUCCESS);
}
