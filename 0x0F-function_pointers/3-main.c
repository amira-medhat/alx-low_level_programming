#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - to check the code
 * @argc: number of arguments passed.
 * @argv: array of strings.
 * Return: 0 on Success.
 */

int main(int argc, char **argv)
{
	int (*op_function)(int a, int b);
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_function = get_op_func(argv[2]);
	if (!op_function)
	{
		printf("Error\n");
		exit(99);
	}

	if (!b && (strcmp(argv[2], "/") || strcmp(argv[2], "%")))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op_function(a, b));
	return (0);
}
