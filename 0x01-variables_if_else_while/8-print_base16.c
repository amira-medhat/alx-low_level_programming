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
	int s = 0, e = 9;

	while (s <= e)
	{
		putchar(s + '0');
		s++;
	}

	s = 97;
	e = s + 5;

	while (s <= e)
	{
		putchar(s);
		s++;
	}
	putchar('\n');

	return (0);

}
