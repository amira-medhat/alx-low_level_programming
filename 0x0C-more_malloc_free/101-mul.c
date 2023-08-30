#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit_string - Checks if a string consists of digits only.
 * @str: The string to be checked.
 *
 * Return: 1 if the string consists of digits only, 0 otherwise.
 */

int is_digit_string(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
			return (0);
		str++;
	}
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

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_digit_string(num1) || !is_digit_string(num2))
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
