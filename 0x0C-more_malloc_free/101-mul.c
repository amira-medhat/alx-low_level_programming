#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_integer - Checks if a string represents a valid integer.
 * @str: The string to be checked.
 *
 * Return: 1 if the string represents a valid integer, 0 otherwise.
 */

int is_valid_integer(const char *str)
{
	int i = 0;

	if (str[i] == '-')
		i++;

	while (str[i] != '\0')
	{
		if (!isdigit(str[i]))
		return (0);
		i++;
	}
	if (str[1] == '\0' && str[0] == '-')
		return (0);
	return (1);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 98 on incorrect usage or invalid input.
 */

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	int int_num1;
	int int_num2;
	long result;

	(void)argc;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_valid_integer(num1) || !is_valid_integer(num2))
	{
		printf("Error\n");
		exit(98);
	}

	int_num1 = atoi(num1);
	int_num2 = atoi(num2);
	result = (long)(int_num1 * int_num2);
	printf("%ld\n", result);

	return (0);
}
