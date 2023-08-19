#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: number of arguments.
 * @argv: ointer to strings.
 * Return: 0 on Success.
 */

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int b;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error");
		exit(2);
	}
	while (b--)
	{
		printf("%02hhx%s", *p++, b ? " " : "\n");
	}
	return (0);
}
