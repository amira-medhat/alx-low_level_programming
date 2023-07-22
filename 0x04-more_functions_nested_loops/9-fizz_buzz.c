#include "main.h"

/**
 * main - to print numbers from 1 to 100
 * Return: 0 on Success Always.
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz");
		if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);

		printf(" ");
	}
	return (0);
}
