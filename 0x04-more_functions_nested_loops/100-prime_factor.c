#include "main.h"

/**
 * isprime - checks if the number is prime
 * Return: the largest prime factor.
 * @n: the number to be checked.
 * @firsttime: refers to first call of the fun.
 */

int isprime(long int n, int firsttime)
{
	int i = 2;
	int result;

	if (n <= 1)
		return (0);

	while (i <= n)
	{
		if (n % i == 0)
		{
			if (firsttime == 0)
				printf("The prime factors of %ld are: ", n);
			printf("%d", i);
			if (i != n)
				printf(", ");
			else
				result = n;
			firsttime = 1;
			n = n / i;
		}
		else
		i++;
	}
		printf("\n");
		return (result);
}

/**
 * main - prime factorization function
 * Return: 0 on Success Always.
 */

int main(void)
{
	long int num = 612852475143;
	int firsttime = 0;

	int max = isprime(num, firsttime);

	printf("The largest prime factor for %ld is: ", num);
	printf("%d\n", max);

return (0);

}
