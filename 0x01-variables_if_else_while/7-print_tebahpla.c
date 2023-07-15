#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int s = 122, e = 97;

	while (s >= e)
	{
		putchar(s);
		s--;
	}
	putchar('\n');

	return (0);

}
